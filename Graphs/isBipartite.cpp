class Solution {
public:

    bool check(int node, int n, vector<vector<int>>& graph, vector<int>& color){
        int n = graph.size();
        queue<int> q;
        vector<int> vis(n,0);
        q.push(node);
        vis[0] = 1;
        color[0] = 1;
        while(!q.empty()){
            int x = q.front();
            vis[x] = 1;
            q.pop();
            for(auto i:graph[x]){
                if(vis[i]==1) {
                    if(color[i]==color[x]) return false;
                }
                else {
                    q.push(i);
                    vis[i] = 1;
                    color[i] = !color[x];
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(), -1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1){
                if(check(i, graph.size(), graph, color)==false) return false;
            }
        }
        return true;
    }
};