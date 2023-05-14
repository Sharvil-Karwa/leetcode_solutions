class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        while(root){
            if(root->val<low) root = root->right;
            else if(root->val>high) root = root->left;
            else break;
        }
        if(root==NULL) return NULL;
        while(root->left && root->left->val<low){
            if(root->left->right) root->left = root->left->right;
            else root->left=NULL;
        } 
        while(root->right && root->right->val>high){
            if(root->right->left) root->right = root->right->left;
            else root->right=NULL;
        } 
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        return root;
    }
};