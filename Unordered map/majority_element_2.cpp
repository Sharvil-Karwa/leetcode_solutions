class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(auto i:nums){
            if(m.find(i)==m.end()){
                m[i] = 1;
            }
            else{
                m[i]++;
            }
        } 

        for(auto i:m){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        } 

        return ans;
    }
};