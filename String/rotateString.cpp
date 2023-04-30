class Solution {
public:
    bool rotateString(string s, string goal) {
        int x = 0;
        while(x<s.size()){
            if(s==goal) return true;
            s = s[s.size()-1] + s.substr(0,s.size()-1);
            x++;
        }
        return false;
    }
};