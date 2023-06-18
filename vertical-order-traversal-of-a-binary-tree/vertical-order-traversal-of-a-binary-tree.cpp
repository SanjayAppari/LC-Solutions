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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>m;   
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode *ptr=p.first;
            int vert=p.second.first;
            int level=p.second.second;
            m[vert][level].insert(ptr->val);
            if(ptr->left) q.push({ptr->left,{vert-1,level+1}});
            if(ptr->right) q.push({ptr->right,{vert+1,level+1}});
        }

        vector<vector<int>>ans;
        for(auto i:m){
            vector<int>v;
            for(auto j:i.second){
                v.insert(v.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};