class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> m;
        for(int i=0;i<s.size();i++){
            int c = 0;
            string a = "";
            int j = i;
            while(c!=10 && j<s.size()){
                a+=s[j];
                j++;
                c++;
            }
            if(c==10){
                if(m.find(a)==m.end()){
                    m[a] = 1;
                }
                else{
                    m[a]++;
                }
            }
        }
        vector<string> ans;
        for(auto i:m){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};