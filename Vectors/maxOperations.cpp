class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-1;
        int sum;
        int ans = 0;
        while(l<r){
            sum = nums[l] + nums[r];
            if(sum==k){
                ans+=1;
                r--;
                l++;
            } 
            else if(sum>k) r--;
            else l++;
        }
        return ans;
    }
};