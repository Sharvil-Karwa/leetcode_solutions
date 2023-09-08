class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int t = nums[i];
            ans+=upper_bound(nums.begin()+i+1,nums.end(),t-k)-lower_bound(nums.begin()+i+1,nums.end(),t-k);
            ans+=upper_bound(nums.begin()+i+1,nums.end(),t+k)-lower_bound(nums.begin()+i+1,nums.end(),t+k);
        }
        return ans;
    }
};