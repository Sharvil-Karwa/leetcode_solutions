class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
        vector<int> ind(V,0);
        for(auto i:adj){
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
        return ans;
	}
};