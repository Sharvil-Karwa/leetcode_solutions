class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>> t;
        int time = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    t.push({i,j,time});
                }
            }
        } 
        while(!t.empty()){
            vector<int> temp = t.front();
            t.pop();
            int i = temp[0];
            int j = temp[1];
            time = temp[2];
            if(i-1>=0 && grid[i-1][j]==1){
                grid[i-1][j] = 2;
                t.push({i-1,j,time+1});
            }
            if(i+1<grid.size() && grid[i+1][j]==1){
                grid[i+1][j] = 2;
                t.push({i+1,j,time+1});
            }
            if(j-1>=0 && grid[i][j-1]==1){
                grid[i][j-1] = 2;
                t.push({i,j-1,time+1});
            }
            if(j+1<grid[i].size() && grid[i][j+1]==1){
                grid[i][j+1] = 2;
                t.push({i,j+1,time+1});
            }
        } 
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        } 
        return time;
    }
};