class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long m = nums[0];
        vector<long long> ans;
        ans.push_back(2*nums[0]);
        for(int i=1;i<nums.size();i++){
            m = max(m,(long long)nums[i]);
            ans.push_back(ans[i-1]+m+nums[i]);
        } 
        return ans;
    }
};