class Solution {
public:
    TreeNode* func(vector<int>& nums, int s,int e){
        if(s>e){
            return NULL;
        }
        int mid = (s+e)/2;
        TreeNode* a = new TreeNode(nums[mid]);
        a->left = func(nums,s,mid-1);
        a->right = func(nums,mid+1,e);
        return a;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp = head;
        vector<int> nums;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        } 
        return func(nums, 0, nums.size()-1);
    }
};