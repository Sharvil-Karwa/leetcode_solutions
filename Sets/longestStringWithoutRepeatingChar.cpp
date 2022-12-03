class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        set<char> set;
        int s = 0;
        int e = 0;
        int ans = 0;
        while(s<str.size()){
            if(set.find(str[s])==set.end()){
                set.insert(str[s]);
                ans = max(s-e+1, ans);
                s++;
            } 
            else{
                set.erase(str[e]);
                e++;
            }
        }
        return ans;
    }
};