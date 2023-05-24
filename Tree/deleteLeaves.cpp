class Solution {
public: 

    bool isLeaf(TreeNode* root){
        if(root->left == NULL && root->right==NULL) return true;
        return false;
    } 

    void func(TreeNode* &root, int n){
        if(root==NULL) return;
        func(root->left,n);
        func(root->right,n);
        if(isLeaf(root) && root->val==n) root = NULL;
    }


    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        func(root, target);
        return root;
    }
};