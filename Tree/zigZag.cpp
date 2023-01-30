class Solution {
public:
    vector<TreeNode*> temp;
    vector<vector<int>> ans;

    void func(int x){
        vector<int> temp2;
        vector<TreeNode*> temp3;
        for(auto i:temp){
            if(i) temp2.push_back(i->val);
            if(i && i->left) temp3.push_back(i->left);
            if(i && i->right) temp3.push_back(i->right);
        } 
        if(x%2!=0) {
            reverse(temp2.begin(),temp2.end());
        }
        x+=1;
        ans.push_back(temp2);
        if(temp3.size()==0) return;
        temp = temp3;
        func(x);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return ans;
        temp.push_back(root);
        func(2);
        return ans;
    }
};