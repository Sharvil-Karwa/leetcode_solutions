class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(auto i:matrix){
            for(auto j:i){
                if(pq.size()<k) pq.push(j);
                else if(j<pq.top()){
                    pq.pop();
                    pq.push(j);
                } 
                else break;
            } 
        } 
        return pq.top();
    }
};