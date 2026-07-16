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

void rnl(TreeNode* root,map<int,int>&mp,int height,vector<int>& ans){
    if(root==nullptr){
        return;
    }

    if(mp.find(height)==mp.end()){
        mp[height]=root->val;
        ans.push_back(root->val);
    }

rnl(root->right,mp,height+1,ans);

rnl(root->left,mp,height+1,ans);

}
    vector<int> rightSideView(TreeNode* root) {
vector<int>ans ;
        

map<int,int> mp;

rnl(root,mp,0,ans);

        return ans;
    }
};