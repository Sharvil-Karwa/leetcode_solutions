class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numset(nums.begin(),nums.end());
        int ans = 0;
        for(auto i:numset){
            if(numset.find(i-1)==numset.end()){
                int len = 0;
                while(numset.find(i+len)!=numset.end()){
                    len++;
                }
                ans = max(ans,len);
            }
        }
        return ans;
    }
};