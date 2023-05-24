class Solution {
public: 

    int gcSum(TreeNode*root){
        int ans = 0;
        if(root->left && root->left->left) ans+=root->left->left->val;
        if(root->left && root->left->right) ans+=root->left->right->val;
        if(root->right && root->right->left) ans+=root->right->left->val;
        if(root->right && root->right->right) ans+=root->right->right->val; 
        return ans;
    }

    void func(TreeNode* root, int &ans){
        if(root==NULL) return;
        if(root->val%2==0) ans+=gcSum(root);
        func(root->left,ans);
        func(root->right,ans);
    }

    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        func(root,ans);
        return ans;
    }
};