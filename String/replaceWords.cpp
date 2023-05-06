class Solution{
    public:
    string replaceWords(vector<string>& vec, string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans+=s[i];
                continue;
            }
            string word = "";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            string prefix = "";
            for(int j=0;j<vec.size();j++){
                if(word.size()>=vec[j].size() && word.substr(0,vec[j].size())==vec[j]){
                    if(prefix.size()==0 || prefix.size()>vec[j].size()){
                        prefix = vec[j];
                    }
                }
            }
            if(prefix.size()>0){
                ans+=prefix;
            }else{
                ans+=word;
            }
            i--;
        }
        return ans;
    }
};