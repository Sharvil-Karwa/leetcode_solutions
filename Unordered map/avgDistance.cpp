class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){ 
            int af = 0;
            int al = 0;
            for(int j=0;j<i+1;j++){
                af+=nums[j];
            } 
            for(int j=n-1;j>=i+1;j--){
                al+=nums[j];
            }
            af = af/(i+1);
            al = al/(n-i-1);
            af = floor(af);
            al = floor(al);
            ans = min(ans,abs(af-al));  
        }
        return ans;
    }
};