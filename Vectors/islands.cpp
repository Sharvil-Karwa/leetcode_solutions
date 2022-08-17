
class Solution {
public:
    void check(vector<vector<char>>& grid,int i,int j){ 
        
        if(i>=grid.size()||j>=grid[i].size()||grid[i][j]=='0'||i<0||j<0){
            return;
        }

        grid[i][j] = '0';
        check(grid,i+1,j);
        check(grid,i-1,j);
        check(grid,i,j+1);
        check(grid,i,j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]=='1'){
                    count+=1;
                    check(grid,i,j);
                }
            }
        }
        return count;
    } 
}; 

