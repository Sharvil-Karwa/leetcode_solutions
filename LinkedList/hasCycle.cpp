class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode* , int> m;
        ListNode* temp = head;
        if(temp==NULL) return false;
        if(temp->next==NULL) return false;
        while(temp!=NULL){
            if(m.find(temp)==m.end()){
                m[temp] = 1;
            }
            else if(m[temp]>=1){
                return true;
            }
            else if(temp==NULL){
                return false;
            }
            temp = temp->next;
            
        } 
        return false;
    }
};