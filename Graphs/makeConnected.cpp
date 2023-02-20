class Solution {
public:
class DisjSet { 
public:
    int *rank, *parent, n;
    DisjSet(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;
        makeSet();
    }
    void makeSet()
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int find(int x)
    {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
 
        if (xset == yset)
            return;
 
        if (rank[xset] < rank[yset]) {
            parent[xset] = yset;
        }
        else if (rank[xset] > rank[yset]) {
            parent[yset] = xset;
        }
        else {
            parent[yset] = xset;
            rank[xset] = rank[xset] + 1;
        }
    }
};
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjSet ds(n);
        int extraEdges = 0;
        for (auto i:connections){
            int x = i[0];
            int y = i[1];
            int xset = ds.find(x);
            int yset = ds.find(y);
            if (xset == yset) extraEdges++;
            else ds.Union(xset, yset);
        } 
        int cnc = 0;
        for(int i=0;i<n;i++){
            if(ds.parent[i]==i) cnc++;
        } 
        if(extraEdges>=cnc-1) return cnc-1;
        return -1;
    }
};