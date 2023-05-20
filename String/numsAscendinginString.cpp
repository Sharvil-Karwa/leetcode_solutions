class Solution {
public:
    bool areNumbersAscending(string s) {
        int prevMax = INT_MIN;
        for(int j=0;j<s.size();j++){
            if(isdigit(s[j])){ 
                string i = "";
                i+=s[j];
                j+=1;
                while(j<s.size() && isdigit(s[j])){
                    i+=s[j];
                    j+=1;
                } 
                if(stoi(i)>prevMax) prevMax = stoi(i);
                else return false;
            }
        } 
        return true;
    }
};