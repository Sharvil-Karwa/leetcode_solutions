class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> v;
        for(int i=0;i<s.size();i++){
            if(v.empty() || v.back().first != s[i]) v.push_back({s[i], 1});
            else{
                v.back().second++;
                if(v.back().second == k) v.pop_back();
            }
        }
        s = "";
        for(auto x:v){
            for(int i=0;i<x.second;i++) s += x.first;
        }
        return s;
    }
};