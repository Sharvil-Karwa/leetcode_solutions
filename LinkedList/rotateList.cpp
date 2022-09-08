class Solution {
public:
    void insertAtTail(ListNode* &head, int val)
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
    
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head; 
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        } 
        int arr2[arr.size()];
        for(int i=0;i<arr.size();i++){
            int newPosition = (i+k)%arr.size();
            arr2[newPosition] = arr[i];
        } 
        ListNode* headd = NULL;
        for(auto i: arr2){
            insertAtTail(headd,i);
        } 
        return headd;
    }
};