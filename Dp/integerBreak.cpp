class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(100);
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2; 
        for(int i=4;i<=n;i++){
            for(int j=1;j<=i;j++){
                dp[i] = max({dp[j]*dp[i-j],dp[i-j]*j,dp[j]*(i-j),(i-j)*j,dp[i]});
            }
        } 
        return dp[n];
    }
};