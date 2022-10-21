class Solution {
public:
    void c(vector<vector<int>> &grid,int i,int j, int x,int y){
        if(i>=x || i<0 || j>=y || j<0 || grid[i][j]==0) return;
        grid[i][j] = 0;
        c(grid,i+1,j,x,y);
        c(grid,i-1,j,x,y);
        c(grid,i,j-1,x,y);
        c(grid,i,j+1,x,y);
    }
    void b(vector<vector<int>> &grid){
        int r = grid.size();
        int c1 = grid[0].size();
        for(int i=0;i<r;i++){
            if(grid[i][0]==1) c(grid,i,0,r,c1);
            if(grid[i][c1-1]==1) c(grid,i,c1-1,r,c1);
        }
        for(int i=0;i<c1;i++){
            if(grid[0][i]==1) c(grid,0,i,r,c1);
            if(grid[r-1][i]==1) c(grid,r-1,i,r,c1);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        b(grid);
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};