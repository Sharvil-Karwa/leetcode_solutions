class Solution {
public:
    
    vector<int> p;
    
    void post(TreeNode* root){ 
        
        if(root==NULL){
            return;
        }
        
        p.push_back(root->val);
        post(root->left);
        post(root->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        post(root);
        sort(p.begin(),p.end());
        
        for(auto i:p){
            cout<<i;
        } 
        
        return p[k-1];
    }
};