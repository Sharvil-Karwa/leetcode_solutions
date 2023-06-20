class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) { 

        if(k==0) return nums;
        if(k>=nums.size()){
            vector<int> ans(nums.size(),-1);
            return ans;
        }
        if(nums.size()<2*k+1){
            vector<int> ans(nums.size(),-1);
            return ans;
        }
        long long sum = 0;
        int subIndx = 0;
        int startIndx = 0;
        int endIndx = 2*k;

        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(-1);

        for(int i=startIndx;i<=endIndx;i++) sum+=nums[i];
        ans.push_back(sum/(2*k+1));

        while(true){
            endIndx++;
            if(endIndx==nums.size()) break;
            sum-=nums[startIndx];
            sum+=nums[endIndx];
            ans.push_back(sum/(2*k+1));
            startIndx++;
        }

        for(int i=0;i<k;i++) ans.push_back(-1);
        return ans;
    }
};