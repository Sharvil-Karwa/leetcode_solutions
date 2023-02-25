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

    vector<TreeNode*> t1;
    vector<vector<int>> t2;

    void func(){
        vector<int> t3;
        vector<TreeNode*> t4;
        for(auto i:t1){
            t3.push_back(i->val);
            if(i->left) t4.push_back(i->left);
            if(i->right) t4.push_back(i->right);
        } 
        t2.push_back(t3);
        if(t4.size()==0) return;
        t1 = t4; 
        func();
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        t1.push_back(root);
        func(); 
        for(auto i:t2){
            ans.push_back(i[i.size()-1]);
        }
        return ans;
    }
};