class Solution {
public:
    int numRescueBoats(vector<int>& arr, int lim) {
        int ans = 0;
        sort(arr.begin(),arr.end());
        stack<int> st;
        for(auto i:arr){
            st.push(i);
        } 
        while(true){
            if(st.empty()) break;
            if(st.top()>=lim){
                ans++;
                st.pop(); 
            }
            else break;
        } 
        deque<int> dq;
        while(!st.empty()){
            dq.push_back(st.top());
            st.pop();
        }  
        while(!dq.empty()){
            if(dq.size()==1){
                ans++;
                dq.pop_front();
            }
            else{
                if(dq.front()+dq.back()<=lim){
                    ans++;
                    dq.pop_front();
                    dq.pop_back();
                }
                else{
                    ans++;
                    dq.pop_front();
                }
            }
        }
        return ans;
    }
};