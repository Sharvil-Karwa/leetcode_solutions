class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> m;
        m[5] = 0;
        m[10] = 0;
        m[20] = 0;
        for(auto i:bills){
            if(i==5){
                m[5]++;
            } 
            else if(i==10){
                m[10]++;
                if(m[5]>=1){
                    m[5]--;
                }
                else return false;
            } 
            else if(i==20){
                m[20]++;
                if(m[10]>=1 && m[5]>=1){
                    m[10]--;
                    m[5]--;
                } 
                else if(m[5]>=3){
                    m[5]-=3;
                } 
                else return false;
            }
        } 
        return true;   
    }
};