class Solution {
public:

    string ibs(int number) {
        const int numBits = sizeof(int) * 8;
        string binaryString;

        for (int i = numBits - 1; i >= 0; --i) {
            int bit = (number >> i) & 1;
            binaryString += std::to_string(bit);
        }

        reverse(binaryString.begin(),binaryString.end());
        return binaryString;
    }

    int minFlips(int a, int b, int c) {
        string s1 = ibs(a);
        string s2 = ibs(b);
        string s3 = ibs(c);
        int ans = 0;
        for(int i=0;i<s1.size();i++){
            char ac = s1[i];
            char bc = s2[i];
            char cc = s3[i];
            if(cc=='0'){
                if(ac=='0' && bc=='0') ans+=0;
                else if(ac==bc) ans+=2; 
                else ans+=1;
            } 
            else{
                if(ac==bc){
                    if(ac=='1') ans+=0;
                    else ans+=1;
                } 
                else ans+=0;
            } 
        } 
        return ans;
    }
};