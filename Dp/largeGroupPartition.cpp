class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int c = 1;
        vector<vector<int>> ans;
        for(int i=0;i<s.size()-1;i++){ 
            int st = i;
            while(s[i]==s[i+1]){
                i++;
                c++;
            } 
            if(c>=3) ans.push_back({st,i}); 
            c = 1;
        } 
        return ans;
    }
};