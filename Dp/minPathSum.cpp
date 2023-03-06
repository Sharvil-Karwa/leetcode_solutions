class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int r = a.size();
        int c = a[0].size();
        int arr[r][c];
        arr[0][0] = a[0][0];
        for(int i=1;i<r;i++){
            arr[i][0] = a[i][0] + arr[i-1][0];
        }
        for(int i=1;i<c;i++){
            arr[0][i] = a[0][i] + arr[0][i-1];
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                arr[i][j] = a[i][j] + min(arr[i-1][j],arr[i][j-1]);
            }
        } 
        return arr[r-1][c-1]; 
    }
};