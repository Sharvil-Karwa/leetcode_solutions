class Solution {
public:
    int minimumLength(string st) {
        deque<char> dq;
        for(auto x:st) dq.push_back(x);
        while(!dq.empty()){
            if(dq.front()!=dq.back()) break;
            if(dq.size()==1) break;
            char c = dq.front();
            while(c==dq.front()) dq.pop_front();
            if(dq.empty()) return 0;
            while(c==dq.back()) dq.pop_back();
            if(dq.empty()) return 0; 
        }
        return dq.size();
    }
};