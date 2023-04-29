class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(auto i:nums1){
            int temp  = -1;
            int x;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==i){
                    x = j+1;
                    break;
                }
            } 
            for(int k=x;k<nums2.size();k++){
                if(nums2[k]>i){
                    temp = nums2[k];
                    break;
                }
            }
            ans.push_back(temp);
        } 
        return ans;
    }
};