class Solution {
public:
    TreeNode* insertInBST(TreeNode* &root, int val){
        if(root==NULL) return new TreeNode(val);
        if(val<root->val){
            root->left = insertInBST(root->left,val);
        }
        else{
            root->right = insertInBST(root->right,val);
        }
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        return insertInBST(root,val);
    }
};