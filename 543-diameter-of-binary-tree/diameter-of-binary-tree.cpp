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
    int fun(TreeNode* root,int& ans){
        if(root==NULL) return 0;
        int l=fun(root->left,ans);
        int r=fun(root->right,ans);
        int d=l+r;
        ans=max(ans,d);
        return 1+max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 1;
        int ans=INT_MIN;
        int k = fun(root,ans);
        // ans = max(k,ans);
        return ans;
    }
};