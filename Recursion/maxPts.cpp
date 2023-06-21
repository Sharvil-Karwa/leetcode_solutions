class Solution {
public:
    void func(int n, vector<int> &a, vector<int> temp, int i, vector<int> &bob){
        if(n<0) return;
        if(n==0 || i==-1){
            int s1 = 0;
            for(int i=0;i<temp.size();i++){
                if(bob[i]>a[i]){
                    s1 += i;
                }
            } 
            int s2 = 0;
            for(int i=0;i<temp.size();i++){
                if(temp[i]>a[i]){
                    s2 += i;
                }
            } 
            if(s2>s1) bob = temp;
            return;
        } 
        if(i<0) return;
        if(i==0) temp[0] = n;
        func(n,a,temp,i-1,bob);
        temp[i] = a[i] + 1;
        func(n-a[i]-1,a,temp,i-1,bob);
    }
    vector<int> maximumBobPoints(int n, vector<int>& a) {
        vector<int> bob(a.size(),0);
        vector<int> temp(a.size(),0);
        func(n,a,temp,a.size()-1,bob);
        return bob;
    }
};