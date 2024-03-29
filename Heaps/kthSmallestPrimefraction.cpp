class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int,int>>> pq;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(pq.size()<k){
                    pq.push({((double)arr[i]/(double)arr[j]),{arr[i],arr[j]}});
                } 
                else if(((double)arr[i]/(double)arr[j])<pq.top().first){
                    pq.pop();
                    pq.push({((double)arr[i]/(double)arr[j]),{arr[i],arr[j]}});
                } 
            }
        }  
        return {pq.top().second.first,pq.top().second.second};
    }
};