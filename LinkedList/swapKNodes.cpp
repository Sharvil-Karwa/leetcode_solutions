class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<ListNode*> v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp);
            temp = temp->next;
        }
        int n = v.size();
        swap(v[k-1]->val,v[n-k]->val);
        return head;
    }
};