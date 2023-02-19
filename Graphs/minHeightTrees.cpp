class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> indeg(n,0),ans;
        vector<vector<int>> adj(n);
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            indeg[i[0]]++;
            indeg[i[1]]++;
        }
        queue<int> q;
        for(int i=0;i<indeg.size();i++){
            if(indeg[i]==1){
                q.push(i);
                indeg[i]--;
            }
        } 
        while(!q.empty()){
            int s = q.size();
            ans.clear();
            for(int i=0;i<s;i++){
                int curr = q.front(); q.pop();
                ans.push_back(curr);
                for(auto j:adj[curr]){
                    indeg[j]--;
                    if(indeg[j]==1) q.push(j);
                }
            }
        } 
        if(n==1) ans.push_back(0);
        return ans;
    }
};