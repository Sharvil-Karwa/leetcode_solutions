class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string, int> row;
        unordered_map<string, int> col;
        unordered_map<string, int> box;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    string r = to_string(i) + board[i][j];
                    string c = to_string(j) + board[i][j];
                    string b = to_string(i/3) + to_string(j/3) + board[i][j];
                    if(row[r]++ > 0 || col[c]++ > 0 || box[b]++ > 0){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};