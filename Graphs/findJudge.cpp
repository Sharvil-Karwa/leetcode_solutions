class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        if(trust.size()==0) return -1;
        int arr1[n+1];
        int arr2[n+1];
        for(int i=0;i<n+1;i++){
            arr1[i] = 0;
            arr2[i] = 0;
        }
        for(auto i:trust){
            arr1[i[0]]++;
            arr2[i[1]]++;
        }
        for(int i=0;i<n+1;i++){
            if(arr1[i]==0){
                if(arr2[i]==n-1) return i;
            }
        }
        return -1;
    }
};