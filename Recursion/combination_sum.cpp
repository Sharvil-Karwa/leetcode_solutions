class Solution {
public:

    void func(set<vector<int>> &s, vector<int> temp, int i, int target,vector<int>& arr){
        if(target==0){
            s.insert(temp);
            return;
        } 
        if(target<0) return;
        if(i==arr.size()) return;
        target-=arr[i];
        temp.push_back(arr[i]);
        func(s,temp,i,target,arr);
        func(s,temp,i+1,target,arr);
        temp.pop_back();
        target+=arr[i];
        func(s,temp,i+1,target,arr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> s;
        vector<int> temp;
        func(s,temp,0,target,candidates);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};