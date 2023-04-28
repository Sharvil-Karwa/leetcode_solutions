class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        priority_queue<int> pq;
        unordered_map<int,int> mp;
        for(auto i:hand) mp[i]++;
        for(auto i:mp) pq.push(i.first);
        while(!pq.empty()){
            
            for(int i=0;i<groupSize;i++){
                prev = pq.top()
            }
        }
        return true;
    }
};