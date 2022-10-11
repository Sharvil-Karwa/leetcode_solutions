class Solution {
public:
    unordered_map<int,int> m;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        if(m.find(root->val)==m.end()){
            m[root->val] = 1;
        }
        else{
            m[root->val]++;
        }
        inorder(root->left);
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        int max = 0;
        vector<int> ans;
        for(auto i:m){
            if(i.second>=max) max = i.second;
        }
        for(auto i:m){
            if(i.second==max) ans.push_back(i.first);
        }
        return ans;
    }
};