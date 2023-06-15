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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        int sum=root->val;
        int ans=1;
        int c=0;
        int level=1;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            c=0;
            for(int i=0;i<n;i++){
                TreeNode *ptr=q.front();
                q.pop();
                c+=ptr->val;
                if(ptr->left!=NULL) q.push(ptr->left);
                if(ptr->right!=NULL) q.push(ptr->right);
            }
            // cout<<sum<<" "<<c<<endl;
            if(sum<c){
                sum=c;
                ans=level;
            }
            level++;
        }
        return ans;
    }
};