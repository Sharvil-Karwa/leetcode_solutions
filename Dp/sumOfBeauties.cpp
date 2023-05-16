class Solution {
public:
    int sumOfBeauties(vector<int>& arr) {
        int n = arr.size();
        vector<int> minArr(n);
        vector<int> maxArr(n);
        int min1 = arr[n-1];
        for(int i=n-2;i>=0;i--){
            min1 = min(min1, arr[i+1]);
            minArr[i] = min1;
        }
        min1 = arr[0];
        for(int i=1;i<n-1;i++){
            min1 = max(min1,arr[i-1]);
            maxArr[i] = min1;
        } 
        int ans = 0; 
        for(int i=1;i<=n-2;i++){
            if(minArr[i]<=arr[i] || maxArr[i]>=arr[i]){
                if(arr[i]<arr[i+1] && arr[i-1]<arr[i]) ans+=1;
            }
            else ans+=2;
        } 
        return ans;
    }
};