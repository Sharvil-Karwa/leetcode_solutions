class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i:nums){
            if(m.find(i)!=m.end()) m[i]++;
            else m[i] = 1;
        }
        for(auto i:m){
            if(i.second==1) return i.first;
        }
        return -1;
    }
};