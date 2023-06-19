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

    TreeNode* fun(vector<int>& postorder,int pl,int ph,vector<int>& inorder,int il,int ih,unordered_map<int,int>&m){
        if(pl>ph || il>ih) return NULL;
        int m1=m[postorder[ph]];
        TreeNode *root=new TreeNode;
        root->val=postorder[ph];
        root->left=root->right=NULL;
        int numsleft=m1-il;
        root->left=fun(postorder,pl,pl+numsleft-1,inorder,il,m1-1,m);
        root->right=fun(postorder,pl+numsleft,ph-1,inorder,m1+1,ih,m);
        return root;        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i,n=inorder.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++) m[inorder[i]]=i;
        TreeNode *root=fun(postorder,0,n-1,inorder,0,n-1,m);
        return root;
    }
};