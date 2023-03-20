class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        set<char> set;
        int r = 0;
        int l = 0;
        int ans = 0;
        while(r<str.size()){
            if(set.find(str[r])==set.end()){
                set.insert(str[r]);
                ans = max(r-l+1, ans);
                r++;
            } 
            else{
                set.erase(str[l]);
                l++;
            }
        }
        return ans;
    }
};