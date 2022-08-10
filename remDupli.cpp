class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> st;  
        int n = nums.size();
        st.push(nums[0]);
        for(int i=1;i<n;i++){
            if(st.top()==nums[i]){ 
                continue;
            }
            else{
                st.push(nums[i]); 
            }
        } 
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        int i=0;
        while(!temp.empty()){
            nums[i] = temp.top();
            temp.pop();
            i++;
        }
        return i;
    }
};