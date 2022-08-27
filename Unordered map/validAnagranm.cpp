class Solution {
public:
    bool isAnagram(string s, string t) { 
        
        if(s.length()!=t.length()) return false;
        
        unordered_map<char, int> m;
        unordered_map<char, int> n; 

        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = 1;
            }
            else{
                m[s[i]]++;
            }

            if(n.find(t[i]) == n.end()){
                n[t[i]] = 1;
            }
            else{
                n[t[i]]++;
            }
        } 

        for(auto i:m){
            if(i.second != n[i.first]){
                return false;
            }
        } 

        return true;
    }
};