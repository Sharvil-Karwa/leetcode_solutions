class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        stack<vector<int>> st;
        vector<vector<int>> ans;
        for(auto i:intervals){
            if(st.empty()) st.push(i);
            else{
                if(st.top()[1]>=i[0]){
                    st.top()[0] = min(st.top()[0],i[0]);
                    st.top()[1] = max(st.top()[1],i[1]);
                }
                else{
                    ans.push_back(st.top());
                    st.pop();
                    st.push(i);
                }
            }
        }
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};