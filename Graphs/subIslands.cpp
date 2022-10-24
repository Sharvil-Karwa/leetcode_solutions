class Solution {
public:
    void c(vector<vector<int>>& grid1,vector<vector<int>>& grid2, int i,int j,int &flag){
        if(i<0 || i>=grid2.size() || j<0 || j>=grid2[0].size() || grid2[i][j]==0) return;
        if(grid2[i][j]==1 && grid1[i][j]==0){
            flag = 0;
            return;
        }
        grid2[i][j] = 0;
        c(grid1,grid2,i+1,j,flag);
        c(grid1,grid2,i-1,j,flag);
        c(grid1,grid2,i,j-1,flag);
        c(grid1,grid2,i,j+1,flag);
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[0].size();j++){
                int flag = 1;
                if(grid2[i][j]==1){
                    c(grid1,grid2,i,j,flag);
                    if(flag==1) ans+=1;
                }
            }
        } 
        return ans;
    }
};