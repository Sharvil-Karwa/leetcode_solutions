class Solution {
public:

    bool isPal(string &s){
        int i = 0;
        int j = s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string x = s.substr(i,j-i+1);
                if(isPal(x)) ans+=1;
            }
        } 
        return ans;
    }
};