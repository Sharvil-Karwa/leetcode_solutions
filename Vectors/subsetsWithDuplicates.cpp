class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<pow(2,nums.size());i++){
            vector<int> temp;
            for(int j=0;j<nums.size();j++){
                if((1<<j)&i) temp.push_back(nums[j]);
            }
            s.insert(temp);
        }
        vector<vector<int>> ans (s.begin(),s.end());
        return ans;
    }
};