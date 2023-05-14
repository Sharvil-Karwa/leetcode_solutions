class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans = INT_MIN;
        for(int i=0;i<nums.size()-1;i++){
            int x = nums[i];
            while(i<nums.size()-1 && nums[i+1]>nums[i]){
                x+=nums[i+1];
                i+=1;
            } 
            ans = max(ans,x);
        } 
        return ans;
    }
};