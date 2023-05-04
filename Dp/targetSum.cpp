class Solution {
public:

    void func(vector<int> &nums, int target, int i, int &ans){
        if(i>=nums.size()){
            if(target==0) ans+=1;
            return;
        }
        func(nums,target-nums[i],i+1,ans);
        func(nums,target+nums[i],i+1,ans);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        func(nums,target,0,ans);
        return ans;
    }
};