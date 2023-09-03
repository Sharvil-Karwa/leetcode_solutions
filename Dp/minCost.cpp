class Solution {
public:
    int minCost(vector<int>& sp, vector<int>& hp, vector<int>& rc, vector<int>& cc) {
        int x = hp[0];
        int y = hp[1];
        int i = sp[0];
        int j = sp[1]; 


        int ans = 0;

        if(y>j){
            for(int k=j+1;k<=y;k++) ans+=cc[k];
        } 
        else for(int k=j-1;k>=y;k--) ans+=cc[k]; 

        if(x>i){
            for(int k=i+1;k<=x;k++) ans+=rc[k];
        } 
        else for(int k=i-1;k>=x;k--) ans+=rc[k]; 

        return ans;
    }
};
