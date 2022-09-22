class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> m;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end()){
                m[s[i]] = i;
            }
            else{
                m[s[i]] = i;
            }
        }
        for(int i=0;i<s.size();i++){
            int end = m[s[i]];
            int len = 0;
            while(i<end){
                if(m[s[i]]>end){
                    end = m[s[i]];
                }
                len++;
                i++;
            }
            ans.push_back(len+1);
        }
        return ans;
    }
};