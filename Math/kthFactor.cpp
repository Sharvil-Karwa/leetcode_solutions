class Solution {
public:
    int kthFactor(int n, int k) { 
        int fact = 1;
        k-=1;
        while(k>0){
            if(fact==n) return -1;
            fact++;
            if(n%fact==0) k--;
        } 
        return fact;
    }
};