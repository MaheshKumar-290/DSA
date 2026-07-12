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

int ans =-9999999;

int MaxPathsum(TreeNode* root){
    if(root==nullptr ){
    return 0;
}

int left =MaxPathsum(root->left);

int  right =MaxPathsum(root->right);


ans=max({ans,left+right+root->val,root->val,right+root->val,left+root->val});

return max({root->val,(max(left,right)+root->val)});


}

    int maxPathSum(TreeNode* root) {
        int a=MaxPathsum(root);
return ans;
        
    }
};