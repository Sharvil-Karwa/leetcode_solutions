class Solution {
public:
    int lengthOfLongestSubstring(string s) { 

        if(s.size() == 0)
            return 0;


        unordered_map<char, int> map; 

        for(int i=0;i<s.length();i++){
            if(map.find(s[i]) != map.end()){
                map[s[i]] = i - map[s[i]];
            }
            else{
                map[s[i]] = i;
            }
        } 

        int max = 0; 

        for(auto i:map){
            if(i.second > max){
                max = i.second;
            }
        }

        return max;
    }
};