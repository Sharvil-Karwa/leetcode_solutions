class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<vector<pair<int,int>>> dp(n, vector<pair<int,int>>(n,{0,0}));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==j){
                    dp[i][j] = {nums[i],nums[j]};
                } 
                else{
                    dp[i][j] = {max(nums[j],dp[i][j-1].first),min(dp[i][j-1].second,nums[j])};
                }
            }
        } 
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans+=abs(dp[i][j].first - dp[i][j].second);
            }
        }
        return ans;
    }
};