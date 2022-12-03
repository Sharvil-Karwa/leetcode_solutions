class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<vector<int>> ans;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int x = arr[i];
            int l = i+1;
            int r = n-1;
            while(l<r){
                
                if(arr[l]+arr[r]==-x){
                    vector<int> temp(3);
                    temp[0] = x;
                    temp[1] = arr[l];
                    temp[2] = arr[r];
                    l++;
                    r--;
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
                else if(arr[l]+arr[r]<-x) l++;
                else r--;
            }
        } 
        vector<vector<int>> ans2 (ans.begin(),ans.end());
        return ans2;
    }
};