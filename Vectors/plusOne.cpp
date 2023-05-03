class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;
        if(digits[digits.size()-1]==9){
            carry = 1;
            ans.push_back(0);
        }
        else ans.push_back(digits[digits.size()-1]+1);
        for(int i=digits.size()-2;i>=0;i--){
            if(carry){
                digits[i]+=1;
                carry = 0;
            } 
            if(digits[i]==10){
                carry = 1;
                digits[i] = 0;
            } 
            ans.push_back(digits[i]);
        } 
        if(carry==1) ans.push_back(1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};