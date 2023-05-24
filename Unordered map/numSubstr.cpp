class Solution {
public: 

    bool is(string s, string t) {
        int i = 0;
        int j = 0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i+=1;
                j+=1;
            } 
            else j+=1;
        } 
        return (i==s.size());
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        int ans = 0;
        unordered_map<string, bool> m;
        for(auto i:words){ 
            if(m.find(i)==m.end()) m[i] = is(i,s);
            if(m[i]) ans+=1;
        } 
        return ans;
    }
};