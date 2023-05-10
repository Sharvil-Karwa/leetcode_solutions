class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix;
        int t = 0;
        int b = n-1;  
        int l = 0;
        int r = n-1;
        int d = 0;
        int ele = 1;
        
        matrix.resize(n);
        for (int i = 0; i < n; ++i)
            matrix[i].resize(n);

        while(ele<=n*n){
            if(d==0){
                for(int i=l;i<=r;i++){
                    matrix[t][i] = ele;
                    ele++;
                }
                d=1;
                t++;
            }
            else if(d==1){
                for(int i=t;i<=b;i++){
                    matrix[i][r] = ele;
                    ele++;
                }
                r--;
                d=2;
            }
            else if(d==2){
                for(int i=r;i>=l;i--){
                    matrix[b][i] = ele;
                    ele++;
                }
                b--;
                d=3;
            }
            else if(d==3){
                for(int i=b;i>=t;i--){
                    matrix[i][l] = ele;
                    ele++;
                }
                l++;
                d=0;
            }
        }
        return matrix;
    }
};