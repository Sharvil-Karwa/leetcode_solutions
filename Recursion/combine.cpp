class Solution {
public:

    void func(vector<int> &arr,vector<int> &temp,set<vector<int>> &ans, int k, int i){
        if(temp.size()==k){
            ans.insert(temp);
            return;
        } 
        if(temp.size()>k) return;
        if(i>=arr.size()) return;
        temp.push_back(arr[i]);
        func(arr,temp,ans,k,i+1);
        temp.pop_back();
        func(arr,temp,ans,k,i+1);
        func(arr,temp,ans,k,i+2);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        } 
        vector<int> temp;
        set<vector<int>> ans;
        func(arr,temp,ans,k,0);
        vector<vector<int>> ans2(ans.begin(),ans.end());
        return ans2;
    }
};