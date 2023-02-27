class Solution {
public:
    int md(TreeNode* root, int& maxi){
        if(root==NULL) return 0;
        int lh = md(root->left,maxi);
        int rh = md(root->right, maxi);
        maxi = max(maxi, lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        int x = md(root, ans);
        return ans;
    }
};