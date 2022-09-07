class Solution {
public:
    
    string ans;
    
    void func(TreeNode* root){
        
        if(root==NULL) return;
        
        ans+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            return;
        }
        
        ans+="(";
        func(root->left);
        ans+=")";
        
        if(root->right!=NULL){
            ans+="(";
            func(root->right);
            ans+=")";
        }
    }
    
    string tree2str(TreeNode* root) {
        func(root);
        return ans;
    }
};