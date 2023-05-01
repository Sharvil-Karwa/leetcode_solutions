class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> m;
            m[s[i]]++;
            for (int j = i + 1; j < s.size(); j++) {
                m[s[j]]++;
                int max_freq = 0, min_freq = INT_MAX;
                for(auto i:m){
                    max_freq = max(max_freq, i.second);
                    min_freq = min(min_freq, i.second);
                }
                ans += max_freq - min_freq;
            }
        }
        return ans;
    }
};