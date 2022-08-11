#include<iostream>
using namespace std;
#define n 100
class Stack{
    int top;
    char* arr;
public:
    Stack(){
        top = -1;
        arr = new char[n];
    }
    char Top(){
        return arr[top];
    }
    bool empty1(){
        return top==-1;
    }
    void pop(){
        if(top==-1){
            cout<<"cannot pop";
            return;
        }
        top--;
    }
    void push(int x){
        if(top==n-1){
            cout<<"overflow"<<endl;
            return;
        }
        top+=1;
        arr[top] = x;
    }
};
int precedence(char c){
    if(c=='^') return 3;
    else if(c=='*'||c=='/') return 2;
    else if (c=='+'||c=='-') return 1;
    else return -1;
}
string infixToPostfix(string s){
    Stack st;
    string result;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            result+=s[i];
        }
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(!st.empty1() && st.Top()!='('){
                    result+=st.Top();
                    st.pop();
            }
            if(!st.empty1()){
                st.pop();
            }
        }
        else{
            while(!st.empty1() && precedence(st.Top())>precedence(s[i])){
                result+=st.Top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty1()){
        result+=st.Top();
        st.pop();
    }
    return result;
}
int main(){
cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;
}
