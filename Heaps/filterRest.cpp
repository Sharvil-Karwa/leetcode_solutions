class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& res, int vf, int mp, int md) {
        vector<int> ans;
        int n = res.size();
        for(int i=0;i<n;i++){
            if(vf==0){
                if(res[i][3]<=mp && res[i][4]<=md) ans.push_back(i);
            } 
            if(vf==1){
                if(res[i][3]<=mp && res[i][4]<=md && res[i][2]==1) ans.push_back(i);
            }
        } 
        priority_queue<pair<int, int>> pq;
        for(auto i:ans){
            pq.push({res[i][1], i});
        } 
        ans.clear();
        while(!pq.empty()){ 
            pair<int, int> temp = pq.top();
            pq.pop(); 
            if(!pq.empty()){
                if(temp.first==pq.top().first){
                  priority_queue<pair<int, int>> pq2;
                  pq2.push({res[temp.second][0], temp.first});
                  pq2.push({res[pq.top().second][0], pq.top().first});
                  pq.pop();
                  while(!pq.empty() && pq.top().first==temp.first){
                    pq2.push({res[pq.top().second][0], pq.top().first});
                    pq.pop();
                  } 
                  while(!pq2.empty()){
                      ans.push_back(pq2.top().first);
                      pq2.pop();
                    }
                }
                else{
                    ans.push_back(res[temp.second][0]);
                }
            } 
            else{
                ans.push_back(res[temp.second][0]);
            }
        }
        return ans;
    }
};