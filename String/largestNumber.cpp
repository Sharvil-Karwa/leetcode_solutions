class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(auto i:nums) v.push_back(to_string(i));
        sort(v.begin(), v.end(),[](string &a, string &b){
            return a+b>b+a;
        });
        string ans = "";
        for(auto i:v) ans+=i;
        int i=0;
        while(ans[i]=='0' && i+1<ans.size()){
            i++;
        }
        return ans.substr(i);
    }
};