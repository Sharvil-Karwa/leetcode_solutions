class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& pr) {
        vector<int> adj[N];
        for(auto i:pr){
            adj[i[0]].push_back(i[1]);
        }
        int V = N;
        vector<int> ind(V,0);
        for(int k=0;k<V;k++){
            vector<int> i = adj[k];
            for(auto j:i){
                ind[j]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(ind[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            for(auto j:adj[q.front()]){
                ind[j]-=1;
                if(ind[j]==0) q.push(j);
            } 
            q.pop();
        } 
        reverse(ans.begin(),ans.end());
        if(ans.size()==N) return ans;
        return {};
    }
};