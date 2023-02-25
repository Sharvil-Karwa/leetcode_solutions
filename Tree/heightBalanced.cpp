class Solution {
public:
    int maxDepth(TreeNode* root) {
            if(root==NULL) return 0;
            return max(1+maxDepth(root->left),1+maxDepth(root->right));
        }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int x = maxDepth(root->left) - maxDepth(root->right);
        if(x>1 || x<-1) return false;
        else return (isBalanced(root->left) && isBalanced(root->right));
    }
};