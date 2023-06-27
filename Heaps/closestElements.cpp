class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        unordered_map<int, vector<int>> m;
        for(auto i:arr){
            m[abs(i-x)].push_back(i);
        }
        vector<int> ans;
        priority_queue<int> pq;
        for(auto i:m) pq.push(-1*i.first);
        while(k!=0 && !pq.empty()){
            for(auto i:m[pq.top()*-1]){
                if(k==0) break;
                ans.push_back(i);
                k--;
            } 
            pq.pop();
        } 
        sort(ans.begin(),ans.end());
        return ans;
    }
};