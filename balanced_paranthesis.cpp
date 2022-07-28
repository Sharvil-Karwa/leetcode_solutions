#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

bool balancedParanthesis(string s){

    stack<char> st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.top()=='[' && s[i]==']'){
                st.pop();
                continue;
            }
            else if(st.top()=='{' && s[i]=='}'){
                st.pop();
                continue;
            }
            else if(st.top()=='(' && s[i]==')'){
                st.pop();
                continue;
            }
            else{
                return false;
            }
        }
    }

    if(st.empty()){
        return true;
    }
    return false;
}

int main()
{
    cout<<balancedParanthesis("[({})]");
}