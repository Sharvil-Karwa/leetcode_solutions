class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <int, vector<int>, greater<int> > pq;
        for(auto i:lists){
            ListNode* temp = i;
            while(temp!=NULL){
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        if(pq.empty()) return NULL;
        ListNode* temp = new ListNode(pq.top());
        pq.pop();
        ListNode* ans = temp;
        while(!pq.empty()){
            temp->next = new ListNode(pq.top());
            pq.pop();
            temp = temp->next;
        }
        return ans;
    }
};