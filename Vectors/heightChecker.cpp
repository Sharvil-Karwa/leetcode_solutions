class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp = heights;
        int ans = 0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=heights[i]) ans+=1;
        }
        return ans;
    }
};