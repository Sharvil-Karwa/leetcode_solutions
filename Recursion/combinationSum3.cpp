class Solution {
public:
    void func(set<vector<int>> &s, vector<int> temp, int i, int target,vector<int>& arr, int k){
        if(target==0 && temp.size()==k){
            s.insert(temp);
            return;
        } 
        if(temp.size()>k) return;
        if(target<0) return;
        if(i==arr.size()) return;
        target-=arr[i];
        temp.push_back(arr[i]);
        func(s,temp,i+1,target,arr,k);
        temp.pop_back();
        target+=arr[i];
        func(s,temp,i+1,target,arr,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        for(int i=1;i<=9;i++) arr.push_back(i);
        set<vector<int>> s;
        vector<int> temp;
        func(s,temp,0,n,arr,k);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};