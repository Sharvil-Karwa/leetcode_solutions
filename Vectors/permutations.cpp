class Solution {
public:
    vector<vector<int>> ans;
    
    void display(vector<int> a)
    {
        ans.push_back(a);
    }
    
    void findPermutations(vector<int> a, int n)
    {
      sort(a.begin(),a.end());
      do {
        display(a);
      } while (next_permutation(a.begin(),a.end()));
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        findPermutations(nums, nums.size());
        return ans;
    }
};