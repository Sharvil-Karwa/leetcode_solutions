class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> vis(mat.size(),vector<int>(mat[0].size(),0));
        vector<vector<int>> ans(mat.size(),vector<int>(mat[0].size(),0));
        queue<vector<int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({i,j,0});
                }
            }
        } 
        while(!q.empty()){
            vector<int> temp = q.front();
            q.pop();
            int i = temp[0];
            int j = temp[1];
            int d = temp[2];
            if(vis[i][j]==1) continue;
            else{
                vis[i][j] = 1;
                ans[i][j] = d;
                if(i-1>=0 && mat[i-1][j]==1) q.push({i-1,j,d+1});
                if(i+1<mat.size() && mat[i+1][j]==1) q.push({i+1,j,d+1});
                if(j-1>=0 && mat[i][j-1]==1) q.push({i,j-1,d+1});
                if(j+1<mat[0].size() && mat[i][j+1]==1) q.push({i,j+1,d+1});
            }
        } 
        return ans;
    }
};