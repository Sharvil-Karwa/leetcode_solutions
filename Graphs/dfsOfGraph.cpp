class Solution {
  public:
    vector<int> ans;

    void dfs(int curr, vector<int> adj[], vector<int>& visited){
        for(auto i:adj[curr]){
            if(visited[i]==-1){
                ans.push_back(i);
                visited[i] = 1;
                dfs(i, adj, visited);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V, -1);
        for(int i=0;i<V;i++){
            if(visted[i]==-1){
                ans.push_back(i);
                visited[i] = 1;
                dfs(i, adj, visited);
            }
        }
        return ans;
    }
};