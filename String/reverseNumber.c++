class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        int digit; 
        
        while(x!=0){
            digit = x%10;
            x /= 10;
            
            if(reversed>INT_MAX/10 || reversed<INT_MIN/10)
                return 0;            
            else{
                reversed = (reversed*10)+digit;
            }
        }
        
        return reversed;
    }
};