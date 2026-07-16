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

void rnl(TreeNode* root,int height,vector<int>& ans){
    if(root==nullptr){
        return;
    }

    if(height==ans.size()){
      
        ans.push_back(root->val);
    }

rnl(root->right,height+1,ans);

rnl(root->left,height+1,ans);

}


    vector<int> rightSideView(TreeNode* root) {
vector<int>ans ;
        



rnl(root,0,ans);

        return ans;
    }
};