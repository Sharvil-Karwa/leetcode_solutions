class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int h1 = nums1.size()-1;
        int h2 = nums2.size()-1;
        while(h1>=0 && h2>=0){
            if(nums1[h1]==nums2[h2]){
                ans.push_back(nums1[h1]);
                h1--;
                h2--;
            } 
            else if(nums1[h1]>nums2[h2]) h1-=1;
            else h2-=1;
        } 
        return ans;
    }
};