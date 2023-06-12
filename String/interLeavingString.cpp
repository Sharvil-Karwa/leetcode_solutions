class Solution {
public:  


    bool func(string &s1, string &s2, string &s3, int i, int j, int k, vector<vector<int>> &m){
        if(m[i][j]!=-1) return m[i][j]; 
        if(i==s1.size() && j==s2.size() && k==s3.size()) return true;
        bool x = false, y = false;
        if(i!=s1.size()){
            if(s1[i]==s3[k]){
                x = func(s1,s2,s3,i+1,j,k+1,m);
            }
        }
        if(j!=s2.size()){
            if(s2[j]==s3[k]){
                y = func(s1,s2,s3,i,j+1,k+1,m);
            }
        } 
        return m[i][j] = x || y;
    }

    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>> m;
        m.resize(s1.size()+1,vector<int>(s2.size() + 1, -1));
        return func(s1,s2,s3,0,0,0,m);
    }
};