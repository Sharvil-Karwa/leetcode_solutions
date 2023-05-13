class Solution {
public:

    int func(vector<int> &arr){
        vector<int> dp(arr.size(),0);
        vector<int> dp2(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i]) dp[i]++;
            }
        } 
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[i]) dp2[i]++;
            }
        } 
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            ans += dp[i]*dp2[i];
        }
        return ans;
    }

    int numTeams(vector<int>& rating) {
        int ans = func(rating);
        reverse(rating.begin(),rating.end());
        ans += func(rating);
        return ans;
    }
};