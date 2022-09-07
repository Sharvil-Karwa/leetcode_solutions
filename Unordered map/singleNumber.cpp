class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root==nullptr) return nullptr;
        func(root);
        return root;
    }
    
    bool func(TreeNode* root){ 
        if(root==nullptr) return false;
        bool l = func(root->left);
        bool r = func(root->right);
        if(!l) root->left = nullptr;
        if(!r) root->right = nullptr; 
        if(root->val==0){
            root = nullptr;
            return
        }
        return root->val==1 || l || r;
    } 
};
