class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy =  new ListNode(0,head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while(curr && curr->next){
            ListNode* next1 = curr->next->next;
            ListNode* s = curr->next;
            
            s->next = curr;
            curr->next = next1; 
            prev->next = s;
            
            prev = curr;
            curr = next1;
        } 
        
        return dummy->next;
    }
};