class Solution {
public:
    int longestOnes(vector<int>& nums, int p) {
        int l = 0;
        int r = 0;
        int zc = 0;
        int ans = 0;
        while(r<nums.size()){
            if(nums[r]==0) zc++;
            while(zc>p){
                if(nums[l]==0) zc--;
                l++; 
            } 
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};