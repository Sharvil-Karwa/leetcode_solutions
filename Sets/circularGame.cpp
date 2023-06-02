class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        set<int> s;
        int cp = 1;
        int i = 1;
        while(s.find(cp)==s.end()){
            s.insert(cp);
            cp += (i*k);
            cp %= n;
            if(cp==0) cp = n;
            i+=1;
        } 
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(s.find(i)==s.end()) ans.push_back(i);
        }
        return ans;
    }
};