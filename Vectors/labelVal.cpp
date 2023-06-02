class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<values.size();i++){
            m[labels[i]].push_back(values[i]);
        }
        for(auto it=m.begin();it!=m.end();it++){
            sort(it->second.begin(),it->second.end(),greater<int>());
        }
        vector<int> v;
        for(auto it=m.begin();it!=m.end();it++){
            for(int i=0;i<min((int)it->second.size(),useLimit);i++){
                v.push_back(it->second[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans = 0;
        for(int i=0;i<min(numWanted,(int)v.size());i++){
            ans += v[i];
        }
        return ans;
    }
};