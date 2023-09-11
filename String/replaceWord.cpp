class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string ans = "";
        set<string> s(dictionary.begin(), dictionary.end());
        string temp = "";
        bool full = true;
        for(auto i:sentence){
            if(i==' '){
                if(full){
                    ans+=temp;
                    ans+=" ";
                } 
                temp="";
                full=true;
            } 
            if(s.find(temp)!=s.end() && full){
                ans+=temp;
                ans+=" ";
                full = false;
            } 
            if(i!=' ')temp+=i;
        } 
        if(full && temp.size()>0) {ans+=temp; ans+=" ";};
        return ans.substr(0 ,ans.size()-1);
    }
};