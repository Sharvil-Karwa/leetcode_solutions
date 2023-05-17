class Solution {
public:
    string sortSentence(string s) {
        vector<string> v;
        unordered_map<int, string> m;
        for(int i=0;i<s.size();i++){
            string temp = "";
            while(s[i]!=' ' && i<s.size()){
                temp+=s[i];
                i+=1;
            } 
            m[temp[temp.size()-1]-'0'] = temp.substr(0,temp.size()-1);
        } 
        int i = 1;
        string ans = "";
        while(i<=m.size()){
            ans+=m[i];
            i+=1;
            ans+=" ";
        }
        return ans.substr(0,ans.size()-1);
    }
};