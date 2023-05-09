class Solution {
public: 

    int makeEqualLen(string &a, string &b){
        int len1 = a.size();
        int len2 = b.size();
        if(len1<len2){
            for(int i=0;i<len2-len1;i++) a = '0' + a;
            return len2;
        }
        else if(len1>len2){
            for(int i=0;i<len1-len2;i++) b = '0' + b;
            return len1;
        }
        else return len1;
    }

    string addBinary(string a, string b) {
        int n = makeEqualLen(a,b);
        string ans = "";
        int carry = 0;
        for(int i=n-1;i>=0;i--){
            if(carry==0){
                if(a[i]=='0' && b[i]=='0') ans = '0' + ans;
                else if(a[i]=='1' && b[i]=='1'){
                    ans = '0' + ans;
                    carry = 1;
                }
                else ans = '1' + ans;
            } 
            else{
                if(a[i]=='0' && b[i]=='0'){
                    ans = '1' + ans;
                    carry = 0;
                }
                else if(a[i]=='1' && b[i]=='1') ans = '1' + ans;
                else ans = '0' + ans;
            }
        } 
        if(carry) ans = '1' + ans;
        return ans;
    }
};