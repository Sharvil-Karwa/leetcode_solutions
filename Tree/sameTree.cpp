class Solution { 
public:

    vector<int> one;
    vector<int> two;
    
    void one_push(TreeNode* p){
        
        if(p==NULL){
            one.push_back(0);
            return;
        }
        
        one.push_back(p->val);
        one_push(p->left);
        one_push(p->right);
    }
    
    void two_push(TreeNode* p){
        
        if(p==NULL){
            two.push_back(0);
            return;
        }
        
        two.push_back(p->val);
        two_push(p->left);
        two_push(p->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        one_push(p);
        two_push(q);
        
        if(one.size()!=two.size()) return false;
        
        
        for(int i=0;i<one.size();i++){
            if(one[i]!=two[i]) return false;
        } 
        
        return true;
    }
};