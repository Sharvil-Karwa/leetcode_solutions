class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        for(auto i:score){
            pq.push({i[k],i});
        } 
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        } 
        return ans;
    }
};