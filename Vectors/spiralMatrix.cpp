class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int t = 0;
        int l = 0;
        int r = matrix[0].size()-1;
        int b = matrix.size()-1;
        int dir = 0;

        while(t<=b && l<=r){
            if(dir==0){
                for(int i=l;i<=r;i++){
                    ans.push_back(matrix[t][i]);
                }
                t++;
                dir = 1;
            }
            else if(dir==1){
                for(int i=t;i<=b;i++){
                    ans.push_back(matrix[i][r]);
                }
                r--;
                dir = 2;
            }
            else if(dir==2){
                for(int i=r;i>=l;i--){
                    ans.push_back(matrix[b][i]);
                }
                b--;
                dir = 3;
            }
            else{
                for(int j=b;j>=t;j--){
                    ans.push_back(matrix[j][l]);
                }
                l++;
                dir = 0;
            }
        } 
        
        return ans;
    }
};