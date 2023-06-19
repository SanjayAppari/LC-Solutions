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
    
    TreeNode* fun(TreeNode* root,TreeNode* ptr){
        if(root->val>ptr->val){
            if(root->left==NULL) {
                root->left=ptr; 
            }
            else root->left = fun(root->left,ptr);
        }
        else{
            if(root->right==NULL){
                root->right=ptr; 
            }
           else root->right=fun(root->right,ptr);
        }
        return root;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *ptr=new TreeNode(val);
        if(root==NULL) return ptr;
        return fun(root,ptr);
    }
};