class Solution {
public: 

    int pow(int n){
        int ans = 0;
        while(n!=1){
            if(n%2==0) n/=2;
            else n = n*3 + 1;
            ans++;
        } 
        return ans;
    }

    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> v;
        for(int i=lo;i<=hi;i++){
            int po = pow(i);
            v.push_back({po,i});
        }  
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};