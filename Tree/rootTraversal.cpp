class Solution{
    public:
    void leafTraversal(TreeNode* root, vector<int>& leaf){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            leaf.push_back(root->val);
            return;
        }
        leafTraversal(root->left, leaf);
        leafTraversal(root->right, leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1;
        vector<int> leaf2;
        leafTraversal(root1, leaf1);
        leafTraversal(root2, leaf2);
        return leaf1==leaf2;
    }
}