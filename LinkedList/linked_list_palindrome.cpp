class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        
        vector<int> a;
        
        while(temp!=NULL){
            a.push_back(temp->val);
            temp = temp->next;
        }
        
        for(int i=0;i<a.size()/2;i++){
            if(a[i]!=a[a.size()-1-i]){
                return false;
            }
        }
        
        return true;
        
    }
};