class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        stack<int> pos;
        stack<int> neg;
        for(auto i:arr){
            i>=0?pos.puhs(i):neg.push(-i);
        }
        while(!pos.empty()&&!neg.empty()){
            if(pos.top()>neg.top()){
                neg.pop();
            }
            else if(pos.top()<neg.top()){
                pos.pop();
            }
            else{
                pos.pop();
                neg.pop();
            }
        } 
        vector<int> ans;
        while(!pos.empty()){
            ans.push_back(pos.top());
            pos.pop();
        }
        while(!neg.empty()){
            ans.push_back(-neg.top());
            neg.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};