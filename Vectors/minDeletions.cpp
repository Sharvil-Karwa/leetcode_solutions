class Solution {
public:
    int minimumDeletions(vector<int>& nums) { 
        if(nums.size()==1) return 1;
        int t1 = *max_element(nums.begin(),nums.end());
        int t2 = *min_element(nums.begin(),nums.end());
        int mai,mii;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==t1) mai = i;
            if(nums[i]==t2) mii = i;
        } 
        int ans = 0;
        int n = nums.size();
        if(mii>mai) {
            ans = mai + nums.size() - mii + 1;
            ans = min(ans,mii+1);
            ans = min(ans, n-mai);
        }
        if(mai>mii) {
            ans = mii + nums.size() - mai + 1; 
            ans = min(ans,mai+1); 
            ans = min(ans, n-mii);
        } 
        return ans;
    }
};