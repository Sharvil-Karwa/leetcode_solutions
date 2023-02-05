class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        if(s.size()<p.size()) return ans;
        for(int i=0;i<p.size();i++){
            v1[s[i]-'a']++;
            v2[p[i]-'a']++;
        } 
        for(int i=0;i<s.size()-p.size()+1;i++){
            if(v1==v2) ans.push_back(i);
            v1[s[i]-'a']--;
            if(i+p.size()<s.size()) v1[s[i+p.size()]-'a']++;
        }
        return ans;
    }
};