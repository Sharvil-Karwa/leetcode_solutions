class Solution {
public: 

    int orf(vector<int> &nums){
        if(nums.size()==1) return nums[0];
        int ans = nums[0] | nums[1];
        for(int i=2;i<nums.size();i++){
            ans = ans | nums[i];
            cout<<ans<<endl;
        } 
        return ans;
    } 

    void func(vector<int> &nums, int key, int i, int lastOrf, int &ans){
        if(lastOrf==key && nums.size()==i){ 
            ans+=1; 
            return;
        } 
        if(i==nums.size()) return;
        func(nums, key, i+1, lastOrf, ans);
        func(nums, key, i+1, lastOrf | nums[i], ans);
    } 


    int countMaxOrSubsets(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int ans = 0;
        int key = orf(nums);
        func(nums, key, 0, 0, ans);
        return ans;
    }
};