class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            int sum = 0;
            for(int j=0;j<=i;j++){
                sum+=nums[j];
            }
            nums[i] = sum;
        }

        return nums;
    }
};