class Solution{
    public:
    int countNodes(TreeNode* root){
        if(!root) return 0;
        int lh = 0;
        int rh = 0;
        TreeNode* temp = root;
        while(temp){
            lh++;
            temp = temp->left;
        }
        temp = root;
        while(temp){
            rh++;
            temp = temp->right;
        }
        if(lh==rh) return pow(2,lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};