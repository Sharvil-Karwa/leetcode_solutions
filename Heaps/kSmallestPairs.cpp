class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int,int>>> pq; 
        for(int x=0;x<k;x++){ 
            if(x==nums1.size()) break;
            int i = nums1[x];
            for(int y=0;y<k;y++){
                if(y==nums2.size()) break;
                int j = nums2[y];
                if(pq.size()<k){
                    pq.push({(i+j),{i,j}});  
                } 
                else if(i+j<pq.top().first){
                    pq.pop();
                    pq.push({(i+j),{i,j}});  
                } 
                else break;
            }
        }
        vector<vector<int>> ans;
        while(pq.size()>0){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        } 
        return ans;
    }
};