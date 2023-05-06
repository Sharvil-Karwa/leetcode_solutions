class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        vector<vector<int>> graph(n+1);
        vector<int> parent(n+1);
        for(auto i:edges){
            graph[i[0]].push_back(i[1]);
            parent[i[1]]=i[0];
        } 
        queue<int, int> q;
        q.push({1,0});
        while(!q.empty()){
            int size = q.size();
            while(s--){
                int curr = q.front().first;
                int 
            }
        }
    }
};