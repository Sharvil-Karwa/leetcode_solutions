class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>> a;
        for(int i=0;i<ages.size();i++){
            vector<int> t(2);
            t[0] = ages[i];
            t[1] = scores[i];
            a.push_back(t);
        } 
        sort(a.begin(),a.end());
        vector<int> dp;
        for(int i=0;i<a.size();i++){
            int max1 = 0;
            for(int j=i-1;j>=0;j--){
                if(a[j][0]==a[i][0] || a[j][1]<=a[i][1]){
                    max1 = max(max1,dp[j]);
                }
            } 
            dp.push_back(a[i][1] + max1);
        } 
        return *max_element(dp.begin(),dp.end());
    }
};