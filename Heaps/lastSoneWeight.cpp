class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int, vector<int>> pq;
        
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        } 
        
        int n = stones.size();
        
        while(n>1){
            
            int a = pq.top();
            pq.pop();
            
            int b = pq.top();
            pq.pop();
            
            pq.push(a-b);
            n--;
        }
        
        return pq.top();
    }
};