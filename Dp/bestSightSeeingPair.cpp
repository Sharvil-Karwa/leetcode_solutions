class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        int n = a.size();
        int ans = INT_MIN;
        int var = a[0];
        for(int j=1;j<a.size();j++){
            ans = max(ans,var+a[j]-j);
            var = max(var,a[j] + j);
        }
        return ans;
    }
}; 
