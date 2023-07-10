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

    vector<TreeNode*> temp;
    vector<vector<int>> ans;

    void func(){
        vector<int> temp2;
        vector<TreeNode*> temp3;
        for(auto i:temp){
            if(i) temp2.push_back(i->val);
            if(i && i->left) temp3.push_back(i->left);
            if(i && i->right) temp3.push_back(i->right);
        } 
        ans.push_back(temp2);
        if(temp3.size()==0) return;
        temp = temp3;
        func();
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return ans;
        temp.push_back(root);
        func();
        return ans;
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans = levelOrder(root);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};