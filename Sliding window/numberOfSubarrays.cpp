class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i] = 0;
            else nums[i] = 1;
        }
        unordered_map<int, int> m;
        int sum = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(m.find(sum)==m.end()){
                m[sum] = 1;
            }
            else {
                m[sum]+=1;
            } 
            if(sum==k) ans++;
            if(m.find(sum-k)!=m.end()){
                ans+=m[sum-k];
            }
        } 
        return ans;
    }
};