class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> indeg(n,0);
        vector<vector<int>> rev(n);
        for(int i=0;i<n;i++){
            vector<int> temp = graph[i];
            for(auto j:temp){
                rev[j].push_back(i);
                indeg[i]++;
            }
        } 
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                q.push(i);
                indeg[i]--;
            }
        } 
        vector<int> ans;
        while(!q.empty()){
            for(auto j:rev[q.front()]){
                indeg[j]--;
                if(indeg[j]==0){
                    q.push(j);
                }
            } 
            ans.push_back(q.front());
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};