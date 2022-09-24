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
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        findPermutations(nums, nums.size());
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                bool same = true;
                for(int k=0;k<ans[i].size();k++){
                    if(ans[i][k]!=ans[j][k]){
                        same = false;
                        break;
                    }
                } 
                if(same){
                    ans.erase(ans.begin()+i);
                }
            }
        }
        return ans;
    }
};