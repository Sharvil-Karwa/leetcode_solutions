class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int s = 0;
        int e = 0;
        int prod = 1;
        int ans = 0;
        while(e<nums.size()){
            prod*=nums[e];
            while(s<=e && prod>=k){
                prod/=nums[s];
                s+=1;
            }
            ans+=e-s+1;
            e+=1;
        }
        return ans;
    }
};