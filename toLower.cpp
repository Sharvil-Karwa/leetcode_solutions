class Solution {
public:
    string toLowerCase(string s) {
        string l = "";
        
        for(int i=0;i<s.length();i++){
            
            if('A'<=s[i] && s[i]<='Z')
                l += s[i] + 32;
            else
                l += s[i];
            
        }
        
        return l;
    }
};