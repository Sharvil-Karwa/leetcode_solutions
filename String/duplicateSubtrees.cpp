class Solution {
public:

    string helper(TreeNode* root, unordered_map<string, int>& m, vector<TreeNode*>& res){
        if(!root) return "#";
        string s = to_string(root->val) + "," + helper(root->left, m, res) + "," + helper(root->right, m, res);
        if(m[s] == 1) res.push_back(root);
        m[s]++;
        return s;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*> res;
        unordered_map<string, int> m;
        helper(root, m, res);
        return res;
    }
};