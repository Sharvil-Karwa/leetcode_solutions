class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto i:s){
            if(st.size()==0) st.push(i);
            else{
                if(i=='*') st.pop();
                else st.push(i);
            }
        } 
        string x = "";
        while(st.size()!=0){
            x+=st.top();
            st.pop();
        }
        reverse(x.begin(),x.end());
        return x;
    }
};