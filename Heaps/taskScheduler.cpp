class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> m;
        for(auto i:tasks) m[i]++;
        priority_queue<int> pq;
        for(auto i:m) pq.push(i.second);
        int ans = 0;
        while(!pq.empty()){
            vector<int> temp;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                    temp.push_back(pq.top()-1);
                    pq.pop();
                }
                // else break;
            } 
            for(auto i:temp) if(i>0) pq.push(i);
            if(!pq.empty()) ans+=n+1;
            else {ans+=temp.size(); break;} 
        }
        return ans;
    }
};