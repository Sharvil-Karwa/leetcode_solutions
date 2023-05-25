class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(auto i:word1) m1[i]+=1;
        for(auto i:word2) m2[i]+=1;
        vector<int> m11;
        vector<int> m22;
        for(auto i:m2){
            if(m1.find(i.first)==m1.end()) return false;
            m22.push_back(i.second);
        } 
        for(auto i:m1){
            if(m2.find(i.first)==m2.end()) return false;
            m11.push_back(i.second);
        } 
        sort(m11.begin(),m11.end());
        sort(m22.begin(),m22.end()); 
        for(int i=0;i<m11.size();i++){
            if(m11[i]!=m22[i]) return false;
        } 
        return true;
    }
};