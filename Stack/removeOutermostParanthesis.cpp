class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> index;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st.push('(');
            else st.pop();
            if(st.empty()){
                index.push_back(i);
            }
        } 
        string ans = "";
        for(int j=1;j<index[0];j++) ans+=s[j];
        for(int i = 1;i<index.size();i++){
            for(int j=index[i-1]+2;j<=index[i]-1;j++) ans+=s[j];
        }
        return ans;
    }
};