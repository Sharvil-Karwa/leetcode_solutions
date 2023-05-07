class Solution {
public:

    int diff(string &t1, string &t2){
        int h1 = stoi(t1.substr(0,2));
        int h2 = stoi(t2.substr(0,2));
        int m1 = stoi(t1.substr(3,2));
        int m2 = stoi(t2.substr(3,2));
        h1*=60;
        h1+=m1;
        h2*=60;
        h2+=m2;
        return min(1440-abs(h1-h2),abs(h1-h2));
    }

    int findMinDifference(vector<string>& t) {
        int ans = INT_MAX;
        for(int i=0;i<t.size();i++){
            for(int j=i+1;j<t.size();j++){
                ans = min(ans,diff(t[i],t[j]));
                if(ans==0) return 0;
            }
        } 
        return ans;
    }
};