class Solution {
public:
    int func(TreeNode* root, int min, int max){
        if(root==NULL) return max-min;
        max = max(max, root->val);
        min = min(min, root->val);
        int left = func(root->left, min, max);
        int right = func(root->right, min, max);
        return max(left, right);
    }
    int maxAncestorDiff(TreeNode* root) {
        return func(root, root->val, root->val);
    }
};