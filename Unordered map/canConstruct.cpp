class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        unordered_map<char, int> ran;

        for(auto i:ransomNote) ran[i]+=1;
        for(auto i:magazine) mag[i]+=1;

        for(auto i:ran){
            if(mag[i.first]<i.second) return false;
        } 

        return true;
    }
};