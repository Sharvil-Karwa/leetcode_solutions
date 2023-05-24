class Solution {
public:

    void func(TreeNode* root, string num, long long &ans){
        if(root==NULL){ 
            ans+=stoi(num);
            return;
        } 
        num+=to_string(root->val);
        if((root->left==NULL & root->right==NULL) || (root->left!=NULL && root->right!=NULL)){
            func(root->left,num,ans);
            func(root->right,num,ans);
        } 
        else if(root->right==NULL) func(root->left,num,ans);
        else func(root->right,num,ans);
    }

    int sumNumbers(TreeNode* root) {
        long long ans = 0;
        func(root,"",ans);
        return ans/2;
    }
};