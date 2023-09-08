class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            int t = nums[i];
            int u = upper_bound(nums.begin()+i+1, nums.end(),upper-t) - lower_bound(nums.begin()+i+1, nums.end(),lower-t);
            ans+=u;
        }
        return ans;
    }
};