class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int m; 
        
        if(n==1){
            if(nums[0]==target)
                return 0;
            return -1;
        }
        
        if(n%2==0){
            m = n/2;
        }
        else{
            m = (n+1)/2;
        }
        if(target>nums[m]){
            for(int i=m+1;i<n;i++){
                if(nums[i]==target){
                    return i;
                }
            }
        }
        else if(target<=nums[m]){
            for(int i=0;i<=m;i++){
                if(nums[i]==target){
                    return i;
                }
            }
        }
        else{
            return -1;
        }
        return -1;
    }
};