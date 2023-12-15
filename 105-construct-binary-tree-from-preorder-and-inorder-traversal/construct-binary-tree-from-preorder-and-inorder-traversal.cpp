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

    TreeNode* fun(vector<int>& preorder,int pS,int pE, vector<int>& inorder,int iS,int iE,unordered_map<int,int>&m){
        if(pS>pE || iS>iE) return NULL;
        TreeNode *node = new TreeNode(preorder[pS]);
        int inDst = m[node->val];
        int numsLeft = inDst - iS;

        node->left = fun(preorder,pS+1,pS+numsLeft,inorder,iS,inDst-1,m);
        node->right = fun(preorder,pS+numsLeft+1,pE,inorder,inDst+1,iE,m);
        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>m;
        int i,n=inorder.size();
        for(i=0;i<n;i++) m[inorder[i]]=i;
        return fun(preorder,0,n-1,inorder,0,n-1,m);
    }
};