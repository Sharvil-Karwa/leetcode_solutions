/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        queue<ListNode*> q;
        vector<ListNode*> v;
        while(head!=NULL){
            ListNode* temp = new ListNode(head->val);
            q.push(temp);
            head = head->next;
        } 
        int n = q.size();
        if(k>=n){
            int x = k - n;
            while(!q.empty()){
                v.push_back(q.front());
                q.pop();
            }
            while(x!=0){
                v.push_back(NULL);
                x--;
            } 
            return v;
        }  
        int s = n/k;
        int rem = n%k;
        while(!q.empty()){
            int c = s;
            ListNode* h = q.front();
            ListNode* temp = h;
            q.pop(); c--;
            while(c!=0){
                temp->next = q.front();
                temp = temp->next;
                q.pop();
                c--;
            } 
            if(rem>0){
                temp->next = q.front();
                temp = temp->next;
                q.pop();
                rem--;
            } 
            v.push_back(h);
        }
        return v;
    }
};