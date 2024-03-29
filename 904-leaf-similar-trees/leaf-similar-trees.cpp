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
    void inorder(TreeNode* root,vector<int>&v){
        if(root!=NULL){
            inorder(root->left,v);
            if(root->left==NULL && root->right==NULL) v.push_back(root->val);
            inorder(root->right,v);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        int n1=v1.size();
        if(n1!=v2.size()) return 0;
        for(int i=0;i<n1;i++){
            if(v1[i]!=v2[i]) return 0;
        }
        return 1;
    }
};