class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> s;
        for(auto i:ast){
            if(s.empty() || i>=0) s.push(i);
            else {
                while(true){
                    if(s.top()<0){
                        s.push(i);
                        break;
                    }
                    else if(s.top()>-i){
                        break;
                    }
                    else if(s.top()==-i){
                        s.pop();
                        break;
                    } 
                    else{
                        s.pop();
                        if(s.empty()){
                            s.push(i);
                            break;
                        }
                    }
                }
            }
        } 
        vector<int> ans(s.size());
        for(int i=s.size()-1;i>=0;i--){
            ans[i] = s.top();
            s.pop();
        } 
        return ans;
    }
};