class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int> s1;
        vector<int> s2;
        for(int i=0;i<v1.size();i++){
            string t = "";
            while(i<v1.size() && v1[i]!='.'){
                t+=v1[i];
                i++;
            }
            s1.push_back(stoi(t));
        }
        for(int i=0;i<v2.size();i++){
            string t = "";
            while(i<v2.size() && v2[i]!='.'){
                t+=v2[i];
                i++;
            }
            s2.push_back(stoi(t));
        } 
        if(s1.size()>s2.size()){
            while(s1.size()!=s2.size()) s2.push_back(0);
        }
        if(s2.size()>s1.size()){
            while(s1.size()!=s2.size()) s1.push_back(0);
        } 
        int n = s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]>s2[i]) return 1;
            else if(s2[i]>s1[i]) return -1;
        } 
        return 0;
    }
};