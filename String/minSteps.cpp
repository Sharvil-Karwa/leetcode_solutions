class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for(auto i:s) m1[i]+=1;
        for(auto j:t) m2[j]+=1;
        int ans = 0;
        for(auto i:m1){
            if(m2.find(i.first)==m2.end()){
                ans+=i.second;
            } 
            else{
                int x = i.second-m2[i.first];
                if(x>0) ans+=x;
            }
        } 
        return ans;
    }
};