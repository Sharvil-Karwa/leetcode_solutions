class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i: arr){
            if(m.find(i)==m.end()){
                m[i] = 1;
            }
            else{
                m[i]++;
            }
        } 

        for(auto i:m){
            for(auto j:m){
                if(i==j) continue;
                else{
                    if(i.second==j.second)return false;
                }
            }
        }
        return true;
    }
};
