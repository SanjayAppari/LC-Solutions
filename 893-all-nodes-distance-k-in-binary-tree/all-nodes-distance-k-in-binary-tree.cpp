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

    void fun(TreeNode *target,int k,vector<int>&ans,unordered_map<TreeNode*,TreeNode*>parent,unordered_map<TreeNode*,bool>& vis){
        if(k==0){
            ans.push_back(target->val);
            return ;
        }
        if(target==NULL) return;
        if(target->left && !vis[target->left]){
            vis[target->left]=1;
            fun(target->left,k-1,ans,parent,vis);
        }
        if(target->right && !vis[target->right]) {
            vis[target->right]=1;
            fun(target->right,k-1,ans,parent,vis);
        }
        if(parent[target] && !vis[parent[target]]) {
            vis[parent[target]]=1;
            fun(parent[target],k-1,ans,parent,vis);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        if(target==NULL) return {};
        unordered_map<TreeNode*,TreeNode*>parent;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *p=q.front(); q.pop();
            if(p->left){
                q.push(p->left); parent[p->left]=p;
            }
            if(p->right){
                q.push(p->right); parent[p->right]=p;
            }
        }

        vector<int>ans;
        unordered_map<TreeNode*,bool>vis;
        vis[target]=1;
        fun(target,k,ans,parent,vis);
        return ans;
    }
};