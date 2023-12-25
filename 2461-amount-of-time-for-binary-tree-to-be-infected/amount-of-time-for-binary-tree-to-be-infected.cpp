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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parent;
        queue<TreeNode*>q;
        TreeNode *target=NULL;
        q.push(root);
        while(!q.empty()){
            TreeNode *ptr=q.front(); q.pop();
            if(ptr->val==start) target = ptr;
            if(ptr->left) {
                parent[ptr->left]=ptr; q.push(ptr->left);
            }
            if(ptr->right) {
                parent[ptr->right]=ptr; q.push(ptr->right);
            }
        }

        unordered_map<TreeNode*,bool>vis;
        q.push(target);
        vis[target]=1;
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            int c=0;
            for(int i=0;i<n;i++){
                TreeNode *ptr = q.front(); q.pop();
                if(ptr->left && !vis[ptr->left]){
                    q.push(ptr->left); vis[ptr->left]=1; c++;
                }
                if(ptr->right && !vis[ptr->right]){
                    q.push(ptr->right); vis[ptr->right]=1; c++;
                }
                if(parent[ptr] && !vis[parent[ptr]]){
                    q.push(parent[ptr]); vis[parent[ptr]]=1; c++;
                }
            }
            if(c) ans++;
        }
        return ans;
    }
};