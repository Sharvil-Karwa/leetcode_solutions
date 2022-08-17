class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* h = head;
        ListNode* t = head;
        
        while(h!=NULL && h->next!=NULL){
            h = h->next->next;
            t = t->next;
        }
        
        return t;
    }
};