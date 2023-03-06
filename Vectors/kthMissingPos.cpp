class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;
        int i = 0;
        int a = 0;
        int ans;
        while(i<arr.size() && a<k){
            if(curr!=arr[i]){
                ans = curr;
                curr++;
                a++;
            }
            else{
                i++;
                curr++;
            }
        } 
        for(int i=a;i<k;i++){
            ans = curr;
            curr++;
        }
        return ans;
    }
};