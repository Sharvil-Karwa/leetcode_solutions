class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        unordered_map<int, int> m;
        ListNode* temp = head;
        while(temp!=NULL){
            m[temp->val]++;
            temp = temp->next;
        } 
        vector<int> arr2;
        for(auto i:m){
            if(i.second==1) arr2.push_back(i.first);
        }
        if(arr2.size()==0) return NULL;
        sort(arr2.begin(),arr2.end());
        ListNode* ans = new ListNode(arr2[0]);
        ListNode* ans2 = ans;
        for(int i=1;i<arr2.size();i++){
            ans->next = new ListNode(arr2[i]);
            ans = ans->next;
        }
        return ans2;
    }
};