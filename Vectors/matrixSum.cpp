class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0; 
        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end());
        }
        for(int j=0;j<nums[0].size();j++){
            int x = nums[0][j];
            for(int i=1;i<nums.size();i++){
                x = max(x,nums[i][j]);
            } 
            ans+=x;
        } 
        return ans;
    }
};