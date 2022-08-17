class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* cp = head;
        ListNode* next1;
        
        while(cp!=NULL){
            next1 = cp->next;
            cp->next = prev;
            prev = cp;
            cp = next1;
        } 
        
        return prev;
    }
};