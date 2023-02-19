class Solution {
public:

    int fp (int n, vector<int> p){
        if(n==p[n]) return n;
        return fp(p[n],p);
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> p(1001,0);
        for(int i=0;i<p.size();i++){
            p[i] = i;
        } 
        vector<int> res;
        for(auto v:edges){
            int n1 = v[0];
            int n2 = v[1];
            int p1 = fp(n1, p);
            int p2 = fp(n2, p);
            if(p1==p2){
                res = v;
            }
            else p[p1] = p2;
        } 
        return res;
    }
};