class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<ListNode*> v1;
        vector<ListNode*> v2;
        ListNode* temp = head;
        while(temp!=NULL){
            int c = temp->val;
            if(c<x) v1.push_back(temp);
            else v2.push_back(temp);
            temp = temp->next;
        } 
        if(v1.size()==0 || v2.size()==0) return head;
        for(int i=1;i<v1.size();i++){
            v1[i-1]->next = v1[i]; 
        } 
        for(int i=1;i<v2.size();i++){
            v2[i-1]->next = v2[i];
        } 
        v1[v1.size()-1]->next = v2[0];
        v2[v2.size()-1]->next = NULL;
        return v1[0];
    }
};