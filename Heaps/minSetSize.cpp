class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        for(auto i:arr) m[i]++;
        priority_queue<pair<int, int>> pq;
        for(auto i:m){
            pq.push({i.second,i.first});
        } 
        int ans = 0;
        int tot = 0;
        while(!pq.empty()){
            ans+=pq.top().first;
            if(ans>=arr.size()/2){
                tot++;
                break;
            } 
            tot++;
            pq.pop();
        } 
        return tot;
    }
};