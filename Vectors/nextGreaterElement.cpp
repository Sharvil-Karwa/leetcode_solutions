class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int c = 0;
            int j = i+1;
            if(i==nums.size()-1) j = 0;
            while(c<nums.size()){
                if(nums[j]>nums[i]){
                    ans.push_back(nums[j]);
                    break;
                } 
                if(j==nums.size()-1){
                    j = 0;
                } 
                else j++;
                c++;
            } 
            if(c==nums.size()) ans.push_back(-1);
        }
        return ans;
    }
};