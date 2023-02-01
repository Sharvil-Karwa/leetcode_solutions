class Solution {
public:

    int gcd(int n1, int n2){
        if(n2==0) return n1;
        return gcd(n2, n1%n2);
    }

    string gcdOfStrings(string s1, string s2) {
        int a = gcd(s1.size(),s2.size());
        string ans = "";
        for(int i=0;i<a;i++){
            if(s1[i]==s2[i]) ans+=s1[i];
            else return "";
        }
        int j = 0;
        for(int i=ans.size();i<s1.size();i++){
            if(j==ans.size()) j = 0;
            if(s1[i]!=ans[j]) return "";
            j++;
        }
        j = 0;
        for(int i=ans.size();i<s2.size();i++){
            if(j==ans.size()) j = 0;
            if(s2[i]!=ans[j]) return "";
            j++;
        }
        return ans;
    }
};