class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        set<vector<int>> ans;
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x = arr[i]+arr[j];
                int l = j+1;
                int r = n-1;
                while(l<r){
                    if(arr[l]+arr[r]==(long)target-(long)x){
                        vector<int> temp(4);
                        temp[0] = arr[i];
                        temp[1] = arr[j];
                        temp[2] = arr[l];
                        temp[3] = arr[r];
                        l++;
                        r--;
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    else if(arr[l]+arr[r]<(long)target-(long)x) l++;
                    else r--;
                }
            }
        } 
        vector<vector<int>> ans2 (ans.begin(),ans.end());
        return ans2;
    }
};