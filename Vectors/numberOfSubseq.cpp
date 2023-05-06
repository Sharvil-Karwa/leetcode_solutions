class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n - 1;
        int mod = 1e9 + 7;
        long long ans = 0;
        while (l <= r) {
            if (nums[l] + nums[r] <= target) {
                ans = (ans + modPow(2, r - l, mod)) % mod;
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
    
    long long modPow(long long a, long long b, long long mod) {
        long long res = 1;
        while (b > 0) {
            if (b & 1) {
                res = (res * a) % mod;
            }
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }
};