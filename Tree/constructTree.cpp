class Solution {
public:

    TreeNode* build(vector<int>& pre, vector<int>& in, int ps, int pe, int is, int ie, map<int, int> map){
        if(is>ie || ps>pe) return NULL;
        TreeNode* root = new TreeNode(pre[ps]);
        int inRoot = map[pre[ps]];
        int numsLeft = inRoot - is;
        root->left = build(pre, in, ps+1, ps+numsLeft, is, inRoot-1, map);
        root->right = build(pre, in, ps+numsLeft+1, pe, inRoot+1, ie, map);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map <int, int> map;
        for(int i=0; i<inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return build(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1, map);
    }
};