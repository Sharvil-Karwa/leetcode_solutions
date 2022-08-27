class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;
        unordered_map<char, bool> n;

        for(int i=0;i<s.length;i++){
            if(m.find(s[i]) == m.end()){
                if(n.find(t[i]) == n.end()){
                    m[s[i]] = t[i];
                    n[t[i]] = true;
                }
                else{
                    return false;
                }
            }
            else{
                if(m[s[i]] != t[i]){
                    return false;
                }
            }
        }

        return true;
    }
};