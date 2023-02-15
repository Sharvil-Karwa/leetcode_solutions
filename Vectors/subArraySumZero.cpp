class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int, int> m;
        int ans = 0;
        int lsum = 0;
        for(int i=0;i<A.size();i++){
            lsum+=A[i];
            if(lsum==0){
                ans = i+1;
            }
            else{
                if(m.find(lsum)!=m.end()){
                    ans = max(ans, i-m[lsum]);
                }
                else{
                    m[lsum] = i;
                }
            }
        }
        return ans;
    }
};