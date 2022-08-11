class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = nums[0];
        
        for(auto i:nums){
            sum+=i;
            if(sum>max) max=sum;
            if(sum<0) sum = 0;
        }
        
        return max;
    }
};