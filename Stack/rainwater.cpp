int rain_water(vector<int> a){
    stack<int> st;
    int n = a.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]<a[i]){
            int cur = st.top();
            st.pop();
            if(st.empty())
                break;
            int diff = i-st.top()-1;
            ans += diff*(min(a[st.top()],a[i])-a[cur]);
        } 
        st.push(i);
    }
    return ans;
}