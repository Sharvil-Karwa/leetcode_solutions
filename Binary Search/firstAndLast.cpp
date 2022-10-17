class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(b(nums,target,true));
        ans.push_back(b(nums,target,false));
        return ans;
    }
    
    int b(vector<int> nums,int target,bool left){
        int s = 0;
        int e = nums.size()-1;
        int m;
        int i = -1;
        
        while(s<=e){
            m = (s+e)/2;
            if(nums[m]>target){
                e = m - 1;
            }
            else if(nums[m]<target){
                s = m + 1;
            }
            else{
                i = m;
                if(left)
                    e = m - 1;
                else
                    s = m + 1;
            }
        }
        
        return i;
    }
};