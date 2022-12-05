class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int n = arr.size();
        int alpha;
        bool odd = false;
        if(n%2!=0){
            odd = true;
            alpha = arr[n/2];
            arr.erase(arr.begin()+n/2);
            n = n-1;
        }
        for(auto i:arr) cout<<i;
        for(int i = 0;i<n/2;i++){
            temp->val = arr[i];
            temp = temp->next;
            temp->val = arr[n-1-i];
            temp = temp->next;
        }
        if(odd) temp->val = alpha;
    }
};