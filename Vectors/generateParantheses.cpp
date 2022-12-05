class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int c = n;
        int o = n;
        string op = "";
        solve(op,o,c,v);
        return v;
    }
    void solve(string op,int o,int c, vector<string> &v){
        if(o==0 && c==0){
            v.push_back(op);
            return;
        }
        if(o!=0){
            string op1 = op;
            op1+="(";
            solve(op1,o-1,c,v);
        }
        if(c>o){
            string op2 = op;
            op2+=")";
            solve(op2,o,c-1,v);
        }
        return;
    }
};