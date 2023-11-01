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

    void inorder(TreeNode* root,unordered_map<int,int>&m){
        if(root!=NULL){
            inorder(root->left,m);
            m[root->val]++;
            inorder(root->right,m);
        }
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>m;
        vector<int>ans;
        inorder(root,m);
        int mx=INT_MIN;
        for(auto i:m) if(mx<i.second) mx=i.second;
        for(auto i:m) if(i.second==mx) ans.push_back(i.first);
        return ans;
    }
};