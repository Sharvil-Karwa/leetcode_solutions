class Solution {
public: 

    bool bs(vector<int>& arr, int key){
        int s = 0;
        int e = arr.size()-1;
        int mid;
        while(s<=e){
            mid = (s+e)/2;
            if(arr[mid]==key) return true;
            else if(arr[mid]>key) e = mid-1;
            else s = mid + 1;
        } 
        return false;
    }

    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        while(bs(nums,original)){
            original*=2;
        } 
        return original;
    }
};