class Solution {
public:
    bool isValid(string s) {
    if(s.length()==1) return false;   
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else if(!st.empty()){
            if(st.top()=='[' && s[i]==']') st.pop();
            else if(st.top()=='{' && s[i]=='}') st.pop();
            else if(st.top()=='(' && s[i]==')') st.pop();
            else return false;
        }
        else if(st.empty() and s[i]==']' || s[i]=='}' || s[i]==')') return false;
    }
    if(st.empty()) return true;
    return false;
    }
};
