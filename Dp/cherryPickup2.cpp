class Solution {
public:

    int f(vector<vector<int>>& grid, int r, int c, vector<vector<vector<int>>> &dp, int i, int j1, int j2){
        if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e8;
        if(i==r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2]; 
        }  
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi = -1e8;
        for(int x1 = -1; x1<=1; x1++){
            for(int x2 = -1; x2<=1; x2++){
                int value = 0;
                if(j1==j2) value+=grid[i][j1]; 
                else value+=(grid[i][j1] + grid[i][j2]);
                maxi = max(maxi, value+f(grid,r,c,dp,i+1,j1+x1,j2+x2));
            }
        } 
        return dp[i][j1][j2] = maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size(); 
        vector<vector<vector<int>>> dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
        return f(grid,r,c,dp,0,0,c-1);
    }
};