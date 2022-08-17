class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size(); 
        int arr[n];
        
        int max = prices[n-1];
        
        for(int j=n-1;j>=0;j--){
            if(prices[j]>max){
                max = prices[j];
            } 
            arr[j] = max;
        } 
        
        max = 0;
        
        for(int i=0;i<n;i++){
            if((arr[i] - prices[i])>max) max = arr[i] - prices[i];
        } 
        
        return max;
    }
};