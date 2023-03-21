class Solution {
public:
    int characterReplacement(string s, int k) {
        set<char> s1;
        for(int i=0;i<s.size();i++){
            s1.insert(s[i]);
        }
        int ans = 0;
        for(auto i:s1){
            char a = i;
            int l = 0;
            int r = 0;
            int zc = 0;
            for(int j=0;j<s.size();j++){
                if(s[j]!=a) zc++;
                while(zc>k){
                    if(s[l]!=a)zc--;
                    l++;
                } 
                ans = max(r-l+1,ans);
                r++;
            }
        }
        return ans;
    }
};