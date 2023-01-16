class Solution {
public:

    vector<vector<int>> ans;

    void func(vector<int> arr, int target, vector<int> temp){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0) return;
        if(arr.size()==0) return;
        temp.push_back(arr[0]);
        func(arr,target-arr[0],temp);
        temp.pop_back();
        arr.erase(arr.begin());
        func(arr,target,temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<int> s(candidates.begin(),candidates.end());
        vector<int> arr(s.begin(),s.end());
        sort(arr.begin(),arr.end());
        func(arr,target,{});
        return ans;
    }
};