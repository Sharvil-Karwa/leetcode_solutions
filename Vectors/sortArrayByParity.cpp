class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        while(l<h){
            if(nums[l]%2==0) l++;
            else if(nums[h]%2!=0) h--;
            else{
                swap(nums[l],nums[h]);
                l++;
                h--;
            }
        } 
        return nums;
    }
};