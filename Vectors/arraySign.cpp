class Solution {
public:
    int arraySign(vector<int>& nums) {
        int nc = 0;
        for(auto i:nums){
            if(i==0) return 0;
            if(i<0) nc+=1;
        } 
        if(nc%2==0) return 1;
        return -1;
    }
};