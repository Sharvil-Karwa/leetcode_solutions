class Solution
{
	public:
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
        vector<int> vis(V,-1);
        stack<int> st;
        for(int i=0;i<V;i++){
            if(visited[i]==-1){
                visited[i] = 1;
                st.push(i);
            }
            for(auto j:adj[i]){
                if(visited[j]==-1){
                    visited[j]=1;
                    st.push(j);
                }
            }
        } 
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
	}
};