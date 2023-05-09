class Solution {
public:
    int getSum(int a, int b) {
        unsigned int ua = static_cast<unsigned int>(a);
        unsigned int ub = static_cast<unsigned int>(b);
        unsigned int carry = 0;
        while (ub != 0) {
            carry = (ua & ub);
            ua = ua ^ ub;
            ub = carry << 1;
        }
        return static_cast<int>(ua);
    }
};