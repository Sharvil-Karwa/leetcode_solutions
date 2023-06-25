class Solution {
public: 
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i:nums) m[i]++;
        vector<vector<int>> ans;
        vector<int> temp;
        while(true){
            for(auto i:m){
                if(i.second>0){
                    temp.push_back(i.first);
                    m[i.first]--;
                }
            } 
            ans.push_back(temp);
            temp.clear();
            bool f = true; 
            for(auto i:m){
                if(i.second>0){
                    f = false;
                    break;
                }
            } 
            if(f) break;
        } 
        return ans;
    }
};