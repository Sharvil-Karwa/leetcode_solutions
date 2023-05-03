class Solution {
public:

    bool nd(vector<int> &arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]) return false;
        } 
        return true;
    }

    void func(vector<int> &arr,vector<int> &temp,set<vector<int>> &ans, int k, int i){
        if(!nd(temp)) return;
        if(temp.size()>=k && nd(temp)){
            ans.insert(temp);
        }
        if(i>=arr.size()) return;
        temp.push_back(arr[i]);
        func(arr,temp,ans,k,i+1);
        temp.pop_back();
        func(arr,temp,ans,k,i+1);
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        set<vector<int>> ans;
        func(nums,temp,ans,2,0);
        vector<vector<int>> ans2(ans.begin(),ans.end());
        return ans2;
    }
};