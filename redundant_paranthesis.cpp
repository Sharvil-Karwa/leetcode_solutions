#include<iostream>
#include<stack>
using namespace std;

bool paranthesis(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='+' || str[i]=='-' || str[i]=='*'|| str[i]=='/' || str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            if(st.top()=='('){
                return false;
            }
            while(st.top()!='('){
                    st.pop();
            }
            st.pop();
        }
        else{
            continue;
        }
    }
    return true;
}

int main(){
    string str = "(a+b)";
    cout<<paranthesis(str);
}
