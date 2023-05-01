class Solution {
public:
    double average(vector<int>& salary) {
        int max1 = INT_MIN;
        int min1 = INT_MAX;
        int s = 0;
        for(auto i:salary){
            s+=i;
            max1 = max(max1,i);
            min1 = min(min1,i);
        }
        s-=max1;
        s-=min1;
        return (double) s/(salary.size()-2);
    }
};