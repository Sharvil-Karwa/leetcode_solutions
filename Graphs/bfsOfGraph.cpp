class Solution {
  public:
    vector<int> ans;

    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> visited(V,-1);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int i = q.front();
            if(visited[i]==-1){
                ans.push_back(i);
                visited[i] = 1;
                for(auto j:adj[i]){
                    if(visited[j]==-1){
                        q.push(j);
                    }
                }
            } 
            q.pop();
        } 
        return ans;
    }
};