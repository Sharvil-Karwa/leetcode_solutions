class Solution {
public:

    void func(set<vector<int>> &ans, vector<int> temp, int i, vector<int>& nums){
        if(i==nums.size()){
            ans.insert(temp);
            return;
        } 
        if(i>nums.size()) return;
        temp.push_back(nums[i]);
        func(ans, temp, i+1, nums);
        temp.pop_back();
        func(ans, temp, i+1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        func(ans,temp,0,nums);
        vector<vector<int>> ans2(ans.begin(),ans.end());
        return ans2;
    }
};
