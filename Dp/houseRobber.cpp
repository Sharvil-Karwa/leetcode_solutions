class Solution {
public:
    int rob(vector<int>& nums) { 
        if(nums.size()==1) return nums[0];
        for(int i=nums.size()-1;i>=0;i--){
            int max = 0;
            for(int j=i+1;j<nums.size();j++){
                if(j==i+1){
                    continue;
                }
                else{
                    if(nums[j]>=max) max = nums[j];
                }
            }
            nums[i]+=max;
        }
        return max(nums[0],nums[1]);
    }
};