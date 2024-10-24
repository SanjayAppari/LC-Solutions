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

    bool checkEquality(vector<int>v1,vector<int>v2){
        if(v1.size()!=2){
            return v1[0]==v2[0];
        }
        return (v1[0]==v2[0] && v1[1]==v2[1]) || (v1[0]==v2[1] && v1[1]==v2[0]);
    }


    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2) return 1;
        if(!root1 || !root2) return 0;
        map<int,vector<int>>m,m2;
        queue<TreeNode *>q;
        q.push(root1);
        while(q.size()!=0){
            TreeNode *p = q.front();
            q.pop();
            if(p->left){
                q.push(p->left);
                m[p->val].push_back(p->left->val);
            }

            if(p->right){
                q.push(p->right);
                m[p->val].push_back(p->right->val);
            }
        }
        q.push(root2);
         while(q.size()!=0){
            TreeNode *p = q.front();
            q.pop();
            if(p->left){
                q.push(p->left);
                m2[p->val].push_back(p->left->val);
            }

            if(p->right){
                q.push(p->right);
                m2[p->val].push_back(p->right->val);
            }
        }

        for(auto i:m){
            vector<int>v1,v2;
            v1=m[i.first];
            v2=m2[i.first];
            if(v1.size()!=v2.size()) return 0;
            if(v1.size()==0) return 1;
            if(!checkEquality(v1,v2)) return 0;
        }
        return 1;
    }
};