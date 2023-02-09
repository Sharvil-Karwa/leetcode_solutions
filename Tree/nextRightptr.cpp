class Solution {
public:
    vector<Node*> temp;
    vector<vector<Node*>> ans;

    void func(){
        vector<Node*> temp2;
        vector<Node*> temp3;
        for(auto i:temp){
            if(i) temp2.push_back(i);
            if(i && i->left) temp3.push_back(i->left);
            if(i && i->right) temp3.push_back(i->right);
        } 
        ans.push_back(temp2);
        if(temp3.size()==0) return;
        temp = temp3;
        func();
    }

    void levelOrder(Node* root) {
        if(!root) return;
        temp.push_back(root);
        func();
    }

    void connectNodes(){
        for(auto i:ans){
            for(int j=0;j<i.size()-1;j++){
                i[j]->next = i[j+1];
            }
            i[i.size()-1]->next = NULL;
        }
    }

    Node* connect(Node* root) {
        levelOrder(root);
        connectNodes();
        return root;
    }
};