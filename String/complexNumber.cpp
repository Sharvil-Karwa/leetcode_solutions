class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string r1 = "";
        string r2 = "";
        string c1 = "";
        string c2 = "";
        bool real = true;
        for(auto i:num1){
            if(i=='+') real = false;
            else if(real) r1+=i;
            else if(i!='i') c1+=i;
        } 
        real = true;
        for(auto i:num2){
            if(i=='+') real = false;
            else if(real) r2+=i;
            else if(i!='i') c2+=i;
        }
        int r = stoi(r1)*stoi(r2)-stoi(c1)*stoi(c2);
        int c = stoi(r1)*stoi(c2)+stoi(r2)*stoi(c1);
        return to_string(r)+"+"+to_string(c)+"i";
    }
};