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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>> v = levelOrder(root);
        return v[v.size()-1][0];
    }
};