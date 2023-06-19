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
    TreeNode* fun(vector<int>& preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,unordered_map<int,int>&m){
        if(prestart>preend || instart>inend) return NULL;

        TreeNode *root=new TreeNode(preorder[prestart]);
        int indRoot=m[root->val];
        int numsleft=indRoot-instart;

        root->left=fun(preorder,prestart+1,prestart+numsleft,inorder,instart,indRoot-1,m);
        root->right=fun(preorder,prestart+numsleft+1,preend,inorder,indRoot+1,inend,m);
        return root;
    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>m;
        int n=inorder.size();
        for(int i=0;i<n;i++) m[inorder[i]]=i;

        return fun(preorder,0,n-1,inorder,0,n-1,m);
    }
};