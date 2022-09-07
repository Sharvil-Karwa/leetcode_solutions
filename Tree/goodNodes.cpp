class Solution {
public:
    
    void c(TreeNode* root,int &count, int m){
        if(root==NULL) return;
        if(root->val>=m){
            count++;
            m = root->val;
        }
        c(root->left,count,m);
        c(root->right,count,m);
        
    }
    
    int goodNodes(TreeNode* root) {
        int count = 0;
        if(!root) return count;
        c(root,count,root->val);
        return count;
    }
};