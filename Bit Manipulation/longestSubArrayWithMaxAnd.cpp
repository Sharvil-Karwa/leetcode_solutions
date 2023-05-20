class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max1 = *max_element(nums.begin(),nums.end()); 
        int curr = 1;
        int ans = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i] && nums[i]==max1){
                curr+=1;
                ans = max(curr, ans);
            } 
            else curr=1;
        }
        return ans;
    }
};