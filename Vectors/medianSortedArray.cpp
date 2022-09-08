class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        
        int n = 0;
        int m = 0;
        
        while(n<nums1.size() && m<nums2.size()){
            if(nums1[n]<nums2[m]){
                merge.push_back(nums1[n]);
                n++;
            } 
            else{
                merge.push_back(nums2[m]);
                m++;
            }
        } 
        
        while(n!=nums1.size()){
            merge.push_back(nums1[n]);
            n++;
        }
        
        while(m!=nums2.size()){
            merge.push_back(nums2[m]);
            m++;
        } 

        int mid = merge.size()/2; 
        
        if(merge.size()%2==0){
            return (double(merge[mid])+double(merge[mid-1]))/2;
        } 
        
        for(auto i:merge) cout<<i;
        return merge[mid];
    }
};