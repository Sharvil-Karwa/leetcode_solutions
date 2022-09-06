class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,bool> m;
        for(auto i:nums){
            if(m.find(i)!=m.end()){
                m[i] = false;
            }
            else{
                m[i] = true;
            }
        }
        
        for(auto i:m){
            if(i.second) return i.first;
        }
        
        return -1;
    }
};