class Solution {
public:
    
    int count = 0;
    
    void dfs(vector<vector<int>>& grid, int i,int j){
        
        if(i>=grid.size()||j>=grid[i].size()||grid[i][j]==0||i<0||j<0){
            return;
        }
        
        grid[i][j] = 0;
        count++;
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1); 
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(grid,i,j);
                    if(count>max) max = count;
                    count = 0;
                }
            }
        } 
        return max;
    }
};