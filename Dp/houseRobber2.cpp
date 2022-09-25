class Solution {
public:
    int r(vector<int>& nums) { 
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
    
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        vector<int> v1 = {nums.begin() , nums.end() - 1};
        vector<int> v2 = {nums.begin() + 1, nums.end()};
        return max(r(v1),r(v2));
    }
};