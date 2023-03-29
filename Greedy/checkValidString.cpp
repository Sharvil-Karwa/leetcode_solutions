class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open.push(i);
            else if(s[i]==')'){
                if(!open.empty()) open.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
            else{
                star.push(i);
            }
        } 
        while(!open.empty()){
            while(!star.empty()){
                if(!open.empty() && star.top()>open.top()){
                    star.pop();
                    open.pop();
                }
                else return false; 
                if(open.empty()) return true;
            } 
            if(!open.empty()) return false;
        }
        return true;
    }
};