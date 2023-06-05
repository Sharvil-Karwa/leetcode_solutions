class Solution {
public:
    int minMoves(int target, int md) {
        int ans = 0;
        if(target%2!=0){
            ans+=1;
            target-=1;
        } 
        while(md>0 && target>1){
            target/=2; 
            if(target%2!=0){
                target-=1;
                ans+=1;
            }
            ans+=1;
            md--;
        } 
        if(md==0){
            return ans + target - 1;
        } 
        target*=2;
        return ans + target - 1;
    }
};