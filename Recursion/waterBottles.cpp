class Solution {
public:
    int func(int ans, int n, int rem, int e){ 
        if(n+rem<e) return ans + n;
        return func(ans+n, (n+rem)/e, (n+rem)%e, e);
    }
    int numWaterBottles(int n, int e) {
        return func(0, n, 0, e);
    }
};