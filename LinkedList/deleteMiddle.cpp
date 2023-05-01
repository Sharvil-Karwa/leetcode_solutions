class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            len+=1;
            temp = temp->next;
        } 
        if(len==1 || len==0) return NULL;
        int target = len/2;
        int c = 0;
        temp = head;
        while(c<target-1){
            temp = temp->next;
            c+=1;
        }
        temp->next = temp->next->next;
        return head;
    }
};