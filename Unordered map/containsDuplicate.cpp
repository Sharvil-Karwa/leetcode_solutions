class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int j=0;j<nums.size();j++){
            int i = nums[j];
            if(m.find(i) == m.end()){
                m[i] = j; 
            }
            else{
                m[i] = j - m[i]; 
                if(m[i] <= k){
                    return true;
                }
            }
        } 
        return false;
    }
};