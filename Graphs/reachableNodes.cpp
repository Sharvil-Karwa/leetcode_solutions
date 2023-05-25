class Solution {
public:

    void dfs(int &ans, set<int> &s, vector<bool> &visited, int node, unordered_map<int, vector<int>> &graph){
        visited[node] = true;
        for(auto i:graph[node]){
            if(s.find(i)==s.end() && !visited[i]){
                ans+=1;
                dfs(ans,s,visited,i,graph);
            }
        }
    }

    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        int ans = 1;
        set<int> s(restricted.begin(),restricted.end());
        vector<bool> visited(n,false);
        unordered_map<int, vector<int>> m;
        for(auto i:edges){
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        dfs(ans,s,visited,0,m);
        return ans;
    }
};