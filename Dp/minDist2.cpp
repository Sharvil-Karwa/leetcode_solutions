class Solution {
public:
    int minDistance(string w1, string w2) {
        vector<vector<int>> dp;
        dp.resize(w1.size()+1,vector<int>(w2.size()+1));
        for(int i=0;i<=w1.size();i++){
            dp[i][0] = i;
        }
        for(int j=0;j<=w2.size();j++){
            dp[0][j] = j;
        } 
        for(int i=1;i<=w1.size();i++){
            for(int j=1;j<=w2.size();j++){
                if(w1[i-1]==w2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1]);
                }
            }
        } 
        return dp[w1.size()][w2.size()];
    }
};