class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<char> st;
                
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        
        int ans = 0; 
        
        if(st.top()==' '){
            while(st.top()==' '){
                st.pop();
            }
        } 
        
        
        while(!st.empty() && st.top()!=' '){
            ans++;
            st.pop();
        }
        
        return ans;
    }
};