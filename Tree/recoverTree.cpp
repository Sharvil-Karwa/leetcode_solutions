class Solution {
public:

    vector<TreeNode*> arr;

    void func(TreeNode* root){
        if(!root) return;
        func(root->left);
        arr.push_back(root);
        func(root->right);
    }

    void recoverTree(TreeNode* root) {
        func(root);
        TreeNode* first = NULL;
        TreeNode* second = NULL;
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i]->val > arr[i+1]->val){
                if(!first) first = arr[i];
                second = arr[i+1];
            }
        }
        swap(first->val, second->val);
    }
};