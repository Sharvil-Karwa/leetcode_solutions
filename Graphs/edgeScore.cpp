class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<int, long long> m;
        for(int i=0;i<edges.size();i++){
            m[edges[i]]+=i;
        } 
        int ans = 0;
        long long val = 0;
        for(auto i:m){
            if(i.second>val){
                val = i.second;
                ans = i.first;
            } 
            else if(i.second==val){
                ans = min(ans, i.first);
            }
        }
        return ans;
    }
};