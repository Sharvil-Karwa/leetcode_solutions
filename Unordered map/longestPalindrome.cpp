class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m; 

        bool extra = false;
        int ans = 0;

        for(int i=0;i<s.length();i++){
            if(m.find(s[i]) == m.end()){
                m[s[i]] = 1;
            }
            else{
                m[s[i]]++;
            }
        } 

        for(auto i:m){
            if(i.second%2==0){
                ans+=i.second;
            } 
            else{
                if(i.second>2){
                    i.second -= 1;
                    ans+=i.second;
                    extra = true;
                } 
                else{
                    extra = true;
                } 
            }
        } 

        if(extra) return ans + 1;
        return ans;   
    }
};