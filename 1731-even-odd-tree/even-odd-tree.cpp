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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int i,n=q.size();
            vector<int>v;
            for(i=0;i<n;i++){
                TreeNode* p = q.front(); q.pop();
                v.push_back(p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
            int r=v[0]%2;
            if(c==0 && r!=1) return 0;
            if(c==1 && r!=0) return 0;
            for(i=1;i<n;i++){
                if(v[i]%2 != r) return 0;
                if(c==0 && v[i]<=v[i-1]) return 0;
                if(c==1 && v[i]>=v[i-1]) return 0;
            }
            c=!c;
        }
        return 1;
    }
};