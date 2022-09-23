class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        unordered_map<int, int> m;
        ListNode* prev = head;
        m[prev->val] = 1;
        ListNode* temp = prev->next;
        while(temp!=NULL){
            int x = temp->val;
            if(m.find(x)==m.end()){
                m[x] = 1;
                prev = prev->next;
                temp = temp->next;
            }
            else{
                prev->next = temp->next;
                temp = prev->next;
            }
        }
        return head;
    }
};