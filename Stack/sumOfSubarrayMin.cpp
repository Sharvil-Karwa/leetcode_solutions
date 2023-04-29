class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<pair<int,int>> s1;
        stack<pair<int,int>> s2;
        long long left[arr.size()];
        long long right[arr.size()];
        for(int i=0;i<arr.size();i++){
            int currElement = arr[i];
            int count = 1;
            while(!s1.empty() && s1.top().first>currElement){
                count += s1.top().second;
                s1.pop();
            } 
            s1.push({currElement,count});
            left[i] = count;
        }
        for(int i=arr.size()-1;i>=0;i--){
            int currElement = arr[i];
            int count = 1;
            while(!s2.empty() && s2.top().first>=currElement){
                count += s2.top().second;
                s2.pop();
            } 
            s2.push({currElement,count});
            right[i] = count;
        } 
        long long ans = 0;
        int modval = 1e9+7;
        for(int i=0;i<arr.size();i++){
            ans = (ans + arr[i]*left[i]*right[i])%modval;
        }
        return ans;
    }
};