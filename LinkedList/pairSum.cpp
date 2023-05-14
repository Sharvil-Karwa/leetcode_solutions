class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> values;
        while(head!=NULL){
            values.push_back(head->val);
            head = head->next;
        } 
        int ans = INT_MIN;
        int n = values.size();
        for(int i=0;i<n/2;i++){
            ans = max(ans, values[i]+values[n-1-i]);
        }
        return ans;
    }
};