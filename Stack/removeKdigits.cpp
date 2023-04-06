class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for(int i=0;i<num.size();i++){
            char a = num[i];
            while(!st.empty() && st.top()>a && k>0){
                st.pop();
                k--;
            } 
            if(!st.empty() || a!='0') st.push(a);
        } 
        while(!st.empty() && k>0){
            st.pop();
            k--;
        } 
        if(st.empty()) return "0";
        // string ans = "";
        // while(!st.empty()){
        //     ans = st.top() + ans;
        //     st.pop();
        // } 
        int n = num.size();
        while(!st.empty()){
            num[n-1] = st.top();
            st.pop();
            n--;
        } 
        return num.substr(n);
    }
};