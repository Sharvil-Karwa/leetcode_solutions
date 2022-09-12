class Solution {
public:
        string sortString(string &str)
        {
            int charCount[26]={0};
            for (int i=0; i<str.length(); i++)
            charCount[str[i]-'a']++;   
            string ans = "";
            for (int i=0;i<26;i++){
                for (int j=0;j<charCount[i];j++)
                    ans+=(char)('a'+i);
        } 
            return ans;
        }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++){
            string s = sortString(strs[i]);
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};