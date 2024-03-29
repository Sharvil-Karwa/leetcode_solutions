class Solution {
public:
    int s(vector<int>& a, int target) {
        int low = 0;
        int high = a.size()-1;
        while(low<=high){
            int mid = (low+high)>>1;
            if(a[mid]==target) return mid; 
            if(a[low]==a[mid] && a[mid]==a[high]) {
                low++;
                high--;
            }
            else if(a[low]<=a[mid]){
                if(target>=a[low] && target<=a[mid]){
                    high = mid - 1;
                } 
                else low = mid + 1;
            } 
            else{
                if(target>=a[mid] && target<=a[high]){
                    low = mid + 1;
                } 
                else high = mid - 1;
            }
        } 
        return -1;
    }
    bool search(vector<int>& nums, int target) {
        return s(nums,target)!=-1;
    }
};