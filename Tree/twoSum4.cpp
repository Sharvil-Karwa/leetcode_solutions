class Solution {
public:

    vector<int> arr;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }

    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int l = 0;
        int r = arr.size()-1;
        int sum;
        while(l<r){
            sum = arr[l] + arr[r];
            if(sum==k) return true;
            else if(sum<k) l++;
            else r--;
        } 
        return false;
    }
};