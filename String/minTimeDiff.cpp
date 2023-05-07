class Solution {
public:

    int diff(string t1, string t2){
        int h1 = stoi(t1.substr(0,2));
        int h2 = stoi(t2.substr(0,2));
        int m1 = stoi(t1.substr(3,2));
        int m2 = stoi(t2.substr(3,2));
        if(h1==h2) return m2-m1;
        else if(h1<h2){
            int diff = 60-m1;
            diff+=m2;
            diff+=(h2-h1-1)*60;
            return diff;
        }
        int diff = 60-m2;
        diff+=m1;
        diff+=(h1-h2-1)*60;
        return diff;
    }

    int findMinDifference(vector<string>& t) {
        return diff(t[0],t[1]);
    }
};