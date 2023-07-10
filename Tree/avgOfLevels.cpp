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
    vector<double> ans;

    void func(){
        long long temp2 = 0;
        int x = 0;
        vector<TreeNode*> temp3;
        for(auto i:temp){
            temp2+=i->val;
            x+=1;
            if(i && i->left) temp3.push_back(i->left);
            if(i && i->right) temp3.push_back(i->right);
        } 
        ans.push_back((double)temp2/(double)x);
        if(temp3.size()==0) return;
        temp = temp3;
        func();
    }

    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return ans;
        temp.push_back(root);
        func();
        return ans;
    }
};