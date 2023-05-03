class Solution {
public:

    bool search(vector<int> &arr, int key){
        int low = 0;
        int high = arr.size()-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]==key) return true;
            else if(arr[mid]>key){
                high = mid - 1;
            }
            else low = mid + 1;
        } 
        return false;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(auto i:nums1){
            if(!search(nums2,i)){
                s1.insert(i);
            }
        } 
        for(auto i:nums2){
            if(!search(nums1,i)){
                s2.insert(i);
            }
        } 
        vector<vector<int>> ans;
        vector<int> v1(s1.begin(),s1.end());
        vector<int> v2(s2.begin(),s2.end()); 
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
    }
};