class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& arr) {
        float div = (float)(arr[1][0] - arr[0][0]);
        float m;
        bool x = false;
        if(div==0) x = true;
        else m = (float)(arr[1][1] - arr[0][1]) / div; 
        for(float j=2;j<arr.size();j++){ 
            float d2 = (float)(arr[j][0]-arr[j-1][0]);
            if(d2==0){
                if(!x) return false;
                else continue; 
            } 
            else{
                float x = (float)(arr[j][1]-arr[j-1][1])/d2; 
                if(x==m) continue;
                else return false;
            }
        } 
        return true;
    }
};