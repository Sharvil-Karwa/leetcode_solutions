/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> v;
    void pre(TreeNode* root){
        if(root==NULL) return;
        v.push_back(root);
        pre(root->left);
        pre(root->right);
    }
    TreeNode* toList(){
        if(v.size()==0) return nullptr;
        TreeNode* head = v[0];
        TreeNode* temp = head;
        for(int i=1;i<v.size();i++){
            temp->left = NULL;
            temp->right = v[i];
            temp = temp->right;
        }
        temp->left = NULL;
        temp->right = NULL;
        return head;
    }
    void flatten(TreeNode* root) {
        pre(root);
        root = toList();
    }
};