class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) nums.erase(nums.begin()+i+1);
        }
        int ans = nums[0]+nums[1]+nums[2];
        int diff = abs(ans-t);
        
        return ans;
    }
};