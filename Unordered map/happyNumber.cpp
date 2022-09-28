class Solution {
public:
    
    int sqSum(int n){
        int ans = 0;
        while(n>0){
            int a = n%10;
            ans += a*a;
            n = n/10;
        }
        return ans;
    }
    
    bool isHappy(int n) {
        
        unordered_map<int,int> m;
        
        while(true){
            if(sqSum(n)==1) return true;
            
            if(m.find(n)!=m.end()){
                return false;
            }
            else{
                m[n] = 1;
            }
            
            n = sqSum(n);
        }
        return false;
    }
};