class Solution {
public:
    TreeNode* ans = new TreeNode(-1);
    void inorder(TreeNode* root, int val){
        if(root==NULL) return;
        if(root->val==val){
            ans = root;
            return;
        }
        inorder(root->left,val);
        inorder(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        inorder(root,val);
        if(ans->val==-1) return nullptr;
        return ans;
    }
};