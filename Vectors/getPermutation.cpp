class Solution {
public: 

    void nextPermutation(vector<int>& nums) {
        int ind1 = -1;
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1 = i;
                break;
            }
        } 
        if(ind1==-1){
            sort(nums.begin(),nums.end());
        }
        else{
            int ind2;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind1]){
                ind2 = i;
                break;
            }
        } 
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+ind1+1,nums.end());
        }
    }

    string getPermutation(int n, int k) {
        vector<int> ans;
        for(int i=0;i<n;i++) ans.push_back(i+1);
        int a = k-1;
        while(a>0){
            nextPermutation(ans);
            a--;
        } 
        string ans2 = "";
        for(auto i:ans){
            ans2 = ans2 + to_string(i);
        }
        return ans2;
    }
};