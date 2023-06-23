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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *ptr=q.front();
            q.pop();
            if(ptr==NULL) return 0;
            TreeNode *temp=ptr->left;
            ptr->left=ptr->right;
            ptr->right=temp;
            if(ptr->left) q.push(ptr->left);
            if(ptr->right) q.push(ptr->right);
        }
        return root;
    }
};