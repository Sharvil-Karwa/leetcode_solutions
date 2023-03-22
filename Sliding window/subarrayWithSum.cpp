class Solution {
public:
    int most(vector<int> &nums, int k){
        int sum = 0;
        int l = 0;
        int r = 0;
        int cnt = 0;
        while(r<nums.size()){
            sum+=nums[r++];
            while(sum>k && l<r) sum-=nums[l++];
            cnt+=r-l;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return most(nums,goal)-most(nums,goal-1);
    }
};