class Solution {
public:

    bool func(string &s, int &i){
        char t = (s[i]=='R')?'D':'R';
        int j;
        for(j = i+1;j<s.size();j++){
            if(s[j]==t){
                s = s.substr(0,j) + s.substr(j+1,s.size()-j+1);
                return false;
            }
        } 
        for(j = 0;j<i;j++){
            if(s[j]==t){
                s = s.substr(0,j) + s.substr(j+1,s.size()-j+1);
                return false;
            }
        }
        return true;
    }

    string predictPartyVictory(string s) { 
        int i = 0;
        while(true){ 
            if(i>=s.size()) i = 0;
            if(s[i]=='R'){
                if(func(s,i)) return "Radiant";
            } 
            else{
                if(func(s,i)) return "Dire";
            } 
            i+=1;
        } 
        return s;
    }
};