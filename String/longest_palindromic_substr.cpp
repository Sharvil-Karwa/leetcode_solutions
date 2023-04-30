class Solution {
public:
    bool checkPalindrome(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int st = 0;
        int len = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPalindrome(s, i, j)){
                    if(j-i+1>len){
                        len = j-i+1;
                        st = i;
                    }
                }
            }
        } 
        return s.substr(st,len);
    }
};