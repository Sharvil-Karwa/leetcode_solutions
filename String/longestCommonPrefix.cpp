class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string st = strs[0];
        int j = 0;
        while(j<st.size()){
            bool x = true;
            for(int i=0;i<strs.size();i++){
                if(strs[i][j]!=st[j]){
                    x = false;
                    break;
                }
            }
            if(x) ans+=st[j];
            if(x==false) break;
            j++;
        }
        return ans;
    }
};