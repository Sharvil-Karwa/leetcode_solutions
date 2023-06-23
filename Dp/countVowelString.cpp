class Solution {
public:
    int countVowelStrings(int n) {
        int arr[n][5];
        for(int i=0;i<5;i++) arr[0][i] = 1;
        int sum = 0;
        int prsum = 5;
        for(int i=1;i<n;i++){ 
            int temp = 0;
            for(int j=0;j<5;j++){
                arr[i][j] = prsum;
                prsum -= arr[i-1][j];
                temp+=arr[i][j];
            } 
            prsum = temp;
        } 
        return prsum;
    }
};