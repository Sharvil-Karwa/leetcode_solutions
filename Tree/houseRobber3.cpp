class Solution {
public: 
    vector<int> help(TreeNode* root){
        if(root==NULL) return {0,0};
        vector<int> left = help(root->left);
        vector<int> right = help(root->right);
        vector<int> v;
        v.push_back(root->val+left[1]+right[1]);
        v.push_back(max(left[0],left[1]) + max(right[0],right[1]));
        return v;
    }

    int rob(TreeNode* root) {
        vector<int> ans = help(root);
        return max(ans[0],ans[1]);
    }
};