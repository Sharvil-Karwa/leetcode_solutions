class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int max_l = maxDepth(root->left);
        int max_r = maxDepth(root->right);
        return max(max_l,max_r) + 1;
    }
};