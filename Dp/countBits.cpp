class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        if(n==0) return ans;
        ans.resize(n+1);
        for(int i=1;i<n+1;i++){
            if(i%2==0){
                ans[i] = ans[i/2];
            }
            else{
                ans[i] = ans[i/2] + 1;
            }
        }
        return ans;
    }
};