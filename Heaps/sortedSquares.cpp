class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue <int, vector<int>, greater<int> > pq; 
        
        for(auto i:nums){
            pq.push(i*i);
        } 
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};