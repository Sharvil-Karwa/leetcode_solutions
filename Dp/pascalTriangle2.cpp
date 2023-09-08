class Solution {
public:
    vector<vector<int>> generate(int n){
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=1;i<n;i++){
            vector<int> t;
            for(int j=0;j<=i;j++){
                if(j==0){
                    t.push_back(ans[i-1][0]);
                } 
                else if(j==i){
                    t.push_back(ans[i-1][j-1]);
                }
                else{
                    t.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            } 
            ans.push_back(t);
        }
        return ans;
    }
    vector<int> getRow(int n) { 
        vector<vector<int>> t = generate(n+1);
        return t[n];
    }
};