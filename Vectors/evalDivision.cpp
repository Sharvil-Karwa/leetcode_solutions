class Solution {
public:

    void dfs(unordered_map<string, vector<pair<string, double>>> &graph, string src, string dest, unordered_set<string> &visited, double &val, double &ans){
        if(src==dest){
            ans = val;
            return;
        }
        visited.insert(src);
        for(int i=0;i<graph[src].size();i++){
            if(visited.find(graph[src][i].first)==visited.end()){
                val*=graph[src][i].second;
                dfs(graph, graph[src][i].first, dest, visited, val, ans);
                val/=graph[src][i].second;
            }
        }
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> ans;
        unordered_map<string, vector<pair<string, double>>> graph;
        for(int i=0;i<equations.size();i++){
            graph[equations[i][0]].push_back({equations[i][1], values[i]});
            graph[equations[i][1]].push_back({equations[i][0], 1/values[i]});
        }
        for(int i=0;i<queries.size();i++){
            unordered_set<string> visited;
            double val = 1;
            double temp = -1;
            if(graph.find(queries[i][0])!=graph.end()) dfs(graph, queries[i][0], queries[i][1], visited, val, temp);
            ans.push_back(temp);
        }
        return ans;
    }
};