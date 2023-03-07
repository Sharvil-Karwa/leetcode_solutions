class Solution {
public:

    bool subsetSumK (int n, int k, vector<int> &arr){
        vector<bool> prev(k+1,0), curr(k+1,0);
        prev[0] = curr[0] = true;
        if(arr[0]<=k) prev[arr[0]] = true;
        for(int i=1;i<n;i++){
            for(int tar = 1;tar<=k;tar++){
                bool notTake = prev[tar];
                bool take = false;
                if(arr[i]<=tar) take = prev[tar-arr[i]];
                curr[tar] = take|notTake;
            }
            prev = curr;
        } 
        return prev[k];
    }

    bool canPartition(vector<int>& nums) {
        int tot = 0;
        for(auto i:nums) tot+=i;
        if(tot%2!=0) return false;
        return subsetSumK(nums.size(),tot/2,nums);
    }
};