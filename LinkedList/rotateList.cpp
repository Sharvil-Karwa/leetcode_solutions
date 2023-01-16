class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        vector<ListNode*> v;
        while(head){
            v.push_back(head);
            head = head->next;
        }
        int c = 0;
        vector<ListNode*> v1;
        while(c!=k){
            v1.push_back(v[v.size()-1]);
            v.pop_back();
            c++;
        }
        for(int i=v1.size()-1;i>=0;i--){
            v.insert(v.begin(),v1[i]);
        }
    }
};