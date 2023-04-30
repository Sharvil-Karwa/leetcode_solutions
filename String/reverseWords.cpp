class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> v;
        for(auto i:s){
            if(i == ' '){
                if(word != ""){
                    v.push_back(word);
                    word = "";
                }
            }else{
                word += i;
            }
        }
        if(word != ""){
            v.push_back(word);
        }
        reverse(v.begin(), v.end());
        string ans = "";
        for(auto i:v){
            ans += i;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};