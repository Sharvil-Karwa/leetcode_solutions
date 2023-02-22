class Solution {
public:
    int n,m;

    void dfs(vector<vector<char>>& board, int i, int j, vector<vector<int>>& vis){
        if(i<0 || j<0 || i>=n || j>=m) return;
        if(vis[i][j]==-1 || board[i][j]=='X') return;
        vis[i][j] = -1;
        dfs(board, i+1, j, vis);
        dfs(board, i-1, j, vis);
        dfs(board, i, j-1, vis);
        dfs(board, i, j+1, vis);
    }

    void solve(vector<vector<char>>& board) {
        n = board.size();
        m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(board[i][0] == 'O') dfs(board, i, 0, vis);
        }
        for(int i=0;i<n;i++){
            if(board[i][m-1] == 'O') dfs(board, i, m-1, vis);
        }
        for(int i=0;i<m;i++){
            if(board[0][i] == 'O') dfs(board, 0 , i, vis);
        }
        for(int i=0;i<m;i++){
            if(board[n-1][i] == 'O') dfs(board, n-1, i, vis);
        } 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0) board[i][j] = 'X';
            }
        }
    }
};