class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;

        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                words.push_back(s.substr(0, i));
                s = s.substr(i+1);
                i = -1;
            }
        } 

        words.push_back(s);

        unordered_map<char, string> m;

        for(int i=0;i<pattern.length();i++){
            if(m.find(pattern[i]) == m.end()){
                m[pattern[i]] = words[i];
            }
            else{
                if(m[pattern[i]] != words[i]){
                    return false;
                }
            }
        }

        reru
    }
};