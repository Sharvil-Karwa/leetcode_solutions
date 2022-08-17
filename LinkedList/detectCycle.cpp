class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* t = head;
        ListNode* h = head;
        
        bool ans = false;
        
        while(h!=NULL && h->next!=NULL){
            h = h->next->next;
            t = t->next;
            
            if(h==t){
                t = head;
                while(t!=h){
                    t = t->next;
                    h = h->next;
                }
                return t;
            }
        }
        return NULL;
    }
};