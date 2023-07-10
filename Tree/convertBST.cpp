/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 


    void func(TreeNode* &node,int &pval){
        if(!node) return;
        func(node->right,pval);
        pval+=node->val; 
        node->val = pval;
        func(node->left,pval);
    }

    TreeNode* convertBST(TreeNode* root) {
        int x = 0;
        func(root, x);
        return root;
    }
};