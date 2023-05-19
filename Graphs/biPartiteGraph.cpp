class Solution {
public:

    bool dfs(vector<vector<int>>& graph, vector<int>& col, int node, int color){
        int n = graph.size();
        col[node] = color;
        for(auto i:graph[node]){
            if(col[i]==-1){
                if(dfs(graph,col,i,!color)==false) return false;
            }
            else{
                if(col[i]==color) return false;
            }
        } 
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> col(n,-1);
        for(int i=0;i<n;i++){
            if(col[i]==-1){
                if(dfs(graph,col,i,0)==false) return false;
            }
        }
        return true;
    }
};