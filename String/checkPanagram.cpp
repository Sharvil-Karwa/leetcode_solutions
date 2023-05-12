class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char, int> m;
        for(char c='a';c<='z';c++) m[c] = -1;
        for(auto i:s){
            if(m.find(i)!=m.end()) m.erase(i);
        } 
        return (m.size()==0);
    }
};