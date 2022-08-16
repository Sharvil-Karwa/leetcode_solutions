class Solution {
public:
    
    void ins(ListNode* &head, int val)
    {
        ListNode* n = new ListNode(val);
        if(head==NULL){
            head=n;
            return;
        }
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = NULL;
        
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        
        while(t1!=NULL && t2!=NULL){
            
            int a = t1->val;
            int b = t2->val;
            
            if(a>b){
                ins(ans,b);
                t2 = t2->next;
            }
            
            else{
                ins(ans,a);
                t1 = t1->next;
            }
        }
        
        if(t1!=NULL && t2==NULL){
            while(t1!=NULL){
                ins(ans,t1->val);
                t1 = t1->next;
            }
        }
        
        if(t1==NULL && t2!=NULL){
            while(t2!=NULL){
                ins(ans,t2->val);
                t2 = t2->next;
            }
        }
        
        return ans;
        
    }
};