class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string> v1;
        vector<string> v2;
        for(auto i:grid){
            string s = "";
            for(auto j:i){
                s+=to_string(j);
                s+=",";
            } 
            v1.push_back(s);
        } 
        for(int i=0;i<grid[0].size();i++){
            string s = "";
            for(int j=0;j<grid.size();j++){
                s+=to_string(grid[j][i]);
                s+=",";
            } 
            v2.push_back(s);
        } 
        int ans = 0;
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v2.size();j++){
                if(v1[i]==v2[j]) ans+=1;
            }
        } 
        return ans;
    }
};