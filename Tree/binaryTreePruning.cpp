class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==nullptr) return nullptr;
        
        if(!func(root)) return nullptr;
        return root;
    }
    
    bool func(TreeNode* root){ 
        if(root==nullptr) return false;
        bool l = func(root->left);
        bool r = func(root->right);
        if(!l) root->left = nullptr;
        if(!r) root->right = nullptr; 
        return root->val==1 || l || r;
    }
};