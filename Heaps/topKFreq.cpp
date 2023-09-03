class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for(auto i:words) m[i]++;
        words.clear();
        priority_queue<pair<int, string>> pq;
        for(auto i:m){
            pq.push({i.second, i.first});
        } 
        while(k!=0 && !pq.empty()){
            pair<int, string> temp = pq.top();
            pq.pop();
            if(!pq.empty()){
                if(pq.top().first==temp.first){
                    priority_queue<pair<string, int>, vector<pair<string, int>>, greater<pair<string, int>>>pq2;
                    pq2.push({temp.second, temp.first});
                    pq2.push({pq.top().second, pq.top().first});
                    pq.pop();
                    while(!pq.empty() && pq.top().first==temp.first){
                        pq2.push({pq.top().second, pq.top().first});
                        pq.pop();
                    } 
                    while(k!=0 && !pq2.empty()){
                        words.push_back(pq2.top().first);
                        pq2.pop();
                        k--;
                    }
                } 
                else{
                    words.push_back(temp.second);
                    k--;
                }
            } 
            else{
                words.push_back(temp.second);
                k--;
            }
        }
        return words;
    }
};