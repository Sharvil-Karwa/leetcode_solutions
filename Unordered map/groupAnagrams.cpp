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
        vector<string> copy = strs;
        for(int i=0;i<copy.size();i++){
            copy[i] = sortString(copy[i]);
        }
        vector<vector<string>> ans;
        for(int i=0;i<copy.size();i++){
            vector<string> temp;
            temp.push_back(strs[i]);
            for(int j=i+1;j<copy.size();j++){
                if(copy[i]==copy[j]){
                    temp.push_back(strs[j]);
                    copy.erase(copy.begin()+j);
                    strs.erase(strs.begin()+j);
                    j--;
                }
            }
            ans.push_back(temp);
        } 
        return ans;
    }
};