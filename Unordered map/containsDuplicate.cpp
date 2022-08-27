class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int j=0;j<nums.size();j++){
            if(m.find(nums[j]) == m.end()){
                m[nums[j]] = j; 
            }
            else{
                m[nums[j]] = j - m[nums[j]]; 
                if(m[nums[j]] <= k){
                    return true;
                }
            }
        } 
        return false;
    }
};