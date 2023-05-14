class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<A.size();i++){
            s.insert(A[i]);
            s.insert(B[i]);
            if(s.size()==i+1) ans.push_back(i+1);
            else if(s.size()==2*(i+1)) ans.push_back(0);
            else ans.push_back(2*(i+1)-s.size());
        }
        return ans;
    }
};