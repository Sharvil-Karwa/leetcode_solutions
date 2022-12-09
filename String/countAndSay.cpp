class Solution {
public:

    string say(string s){
        string ans = "";
        for(int i=0;i<s.size();i++){
            int k = 1;
            while(s[i]==s[i+1]){
                k+=1;
                i++;
            } 
            ans+=to_string(k);
            ans+=s[i];
        }
        return ans;
    }

    string ans2 = "1";
    int k = 0;

    string countAndSay(int n) {
        while(k<n-1){
            ans2 = say(ans2);
            k+=1;
        }
        return ans2;
    }
};