/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent;
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root, NULL});
        while(!q.empty()){
            TreeNode* node = q.front().first;
            TreeNode* par = q.front().second;
            q.pop();
            parent[node] = par;
            if(node->left) q.push({node->left, node});
            if(node->right) q.push({node->right, node});
        }
        vector<int> ans;
        unordered_set<TreeNode*> visited;
        queue<TreeNode*> q2;
        q2.push(target);
        visited.insert(target);
        int level = 0;
        while(level<k){
            int size = q2.size();
            for(int i=0;i<size;i++){
                TreeNode* node = q2.front();
                q2.pop();
                if(node->left && visited.find(node->left)==visited.end()){
                    q2.push(node->left);
                    visited.insert(node->left);
                }
                if(node->right && visited.find(node->right)==visited.end()){
                    q2.push(node->right);
                    visited.insert(node->right);
                }
                if(parent[node] && visited.find(parent[node])==visited.end()){
                    q2.push(parent[node]);
                    visited.insert(parent[node]);
                }
            }
            level++;
        } 
        while(!q2.empty()){
            ans.push_back(q2.front()->val);
            q2.pop();
        }
        return ans;
    }
};