class Solution {
public:

    int hcf(int a, int b) {
        if (b == 0)
            return a;
        return hcf(b, a % b);
    }

    int lc(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    int lcm(vector<int> &arr) {
        int n = arr.size();
        int result = arr[0];

        for (int i = 1; i < n; i++) {
            result = lc(result, arr[i]);
        }

        return result;
    }
    string fractionAddition(string s) {
        vector<int> num;
        vector<int> den;
        if(s[0]!='-') {
            string fnum = "";
            int i = 0;
            while(s[i]!='-' && s[i]!='+' && s[i]!='/' && i<s.size()) {fnum+=s[i]; i++;}
            num.push_back(stoi(fnum));
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='/'){
                string fnum = "";
                int j = i+1;
                while(s[j]!='-' && s[j]!='+' && s[j]!='/' && j<s.size()) {fnum+=s[j]; j++;}
                den.push_back(stoi(fnum));
            } 
            else if(s[i]=='-'){
                string fnum = "";
                int j = i+1;
                while(s[j]!='-' && s[j]!='+' && s[j]!='/' && j<s.size()) {fnum+=s[j]; j++;}
                num.push_back(-1*stoi(fnum));
            } 
            else if(s[i]=='+'){
                string fnum = "";
                int j = i+1;
                while(s[j]!='-' && s[j]!='+' && s[j]!='/' && j<s.size()) {fnum+=s[j]; j++;}
                num.push_back(stoi(fnum));
            }
        } 
        int val = lcm(den);
        int newNum = 0;
        for(int j=0;j<den.size();j++){
            int i = num[j]; 
            cout<<i<<":-> "<<i*(val/den[j])<<endl;
            newNum+=i*(val/den[j]);
        } 
        int hc = hcf(val,abs(newNum));
        newNum/=hc;
        val/=hc;
        s = ""; 
        s+=to_string(newNum);
        s+="/";
        s+=to_string(val);
        return s;
    }
};