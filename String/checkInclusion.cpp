class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v;
        for(int i=0;i<s1.size();i++) v.push_back(s1[i]);
        sort(v.begin(),v.end());
        for(int i=0;i<s2.size()-s1.size()+1;i++){
            vector<int> w;
            for(int j=i;j<i+s1.size();j++) w.push_back(s2[j]);
            sort(w.begin(),w.end());
            if(v==w) return true;
        }
        return false;
    }
};