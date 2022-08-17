class Solution {
public:
    bool isIsomorphic(string s, string t) {
        string s1 = "";
        string s2 = "";

        for(int i=0;i<s.size();i++){ 
            s1 += static_cast<char>(i);
            s2 += static_cast<char>(i);
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    s1 += static_cast<char>(j);
                }
                if(t[i]==t[j]){
                    s2 += static_cast<char>(j);
                }
            } 
            if(s1==s2) return true;
            return false;
        }
    }
};