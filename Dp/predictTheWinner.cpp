class Solution {
public:
    int score(vector<int>& nums, int i, int j, int chance){
        if(i>j) return 0;
        if(chance==0) return max(nums[i]+score(nums,i+1,j,1),nums[j]+score(nums,i,j-1,1));
        else return min(score(nums,i+1,j,0),score(nums,i,j-1,0));
    }
    bool PredictTheWinner(vector<int>& nums) {
        long long total = 0;
        for(auto i:nums) total += (long long)i;
        long long b = (long long) score(nums, 0, nums.size()-1, 0);
        total-=b;
        return b>=total;
    }
};