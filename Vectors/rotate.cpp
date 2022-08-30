class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { 
        
        int n = matrix[0].size();
        queue<int> st;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                st.push(matrix[n-1-j][i]);
            }
        } 
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = st.front();
                st.pop();
            }
        }
    }
};