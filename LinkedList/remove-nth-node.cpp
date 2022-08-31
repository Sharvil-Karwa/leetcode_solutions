class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = 0;
        
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            l++;
        } 
        
        if(l==1){
            return NULL;
        } 
        
        if(n==l){
            return head->next;
        }
        
        l = l-n+1;
        int node = 1;
        temp = head;
        
        while(temp!=NULL){
            if(node==l-1){
                temp->next = temp->next->next;
                break;
            }
            else{
                node++;
                temp = temp->next;
            }
        }
        
        return head;
    }
};