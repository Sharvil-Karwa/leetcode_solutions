class Solution {
public:
    bool helper(TreeNode* root, int x, int t){
        if(root==NULL) return false;
        x+=root->val;
        if(!root->left && !root->right) return(x==t);
        return(helper(root->left,x,t) || helper(root->right,x,t));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,0,targetSum);
    }
};