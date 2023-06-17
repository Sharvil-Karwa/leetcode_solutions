class Solution {
public:

     int kadane(vector<int> &arr){
        int max_so_far = INT_MIN, max_ending_here = 0;
        for(int i=0;i<arr.size();i++){
            max_ending_here+=arr[i];
            if(max_so_far<max_ending_here){
                max_so_far = max_ending_here;
            }
            if(max_ending_here<0){
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }

    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        if(k==1){
            return kadane(arr);
        }
        else if(sum<0){
            return kadane(arr);
        }
        else{
            vector<int> arr2;
            arr2.resize(arr.size()*2);
            for(int i=0;i<arr.size();i++){
                arr2[i] = arr[i];
                arr2[i+arr.size()] = arr[i];
            }
            return kadane(arr2) + (k-2)*sum;
        }
    } 
   
};