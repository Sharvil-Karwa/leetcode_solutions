class Solution {
public:

    TreeNode* build(vector<int>& in, vector<int>& post, int is, int ie, int ps, int pe, map<int, int> map){
        if(is>ie || ps>pe) return NULL;
        TreeNode* root = new TreeNode(post[pe]);
        int inRoot = map[post[pe]];
        int numsLeft = inRoot - is;
        root->left = build(in, post, is, inRoot-1, ps, ps+numsLeft-1, map);
        root->right = build(in, post, inRoot+1, ie, ps+numsLeft, pe-1, map);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int> map;
        for(int i=0; i<inorder.size(); i++){
            map[inorder[i]] = i;
        }
        return build(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1, map);
    }
};