class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode* even = head;
        ListNode* odd = even->next;
        ListNode* evenH = even;
        ListNode* oddH = odd;
        while(even!=NULL && odd!=NULL && even->next!=NULL && odd->next!=NULL){
            even->next = odd->next;
            even = even->next;
            odd->next = even->next;
            odd = odd->next;
        } 
        even->next = oddH;
        return evenH;
    }
};