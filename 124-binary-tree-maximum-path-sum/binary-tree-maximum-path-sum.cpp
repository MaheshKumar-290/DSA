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

TreeNode* MaxPathsum(TreeNode* root){
    if(root==nullptr ){



    return new TreeNode(0);
}


TreeNode* left =MaxPathsum(root->left);

TreeNode*  right =MaxPathsum(root->right);


if(root->right!=nullptr && root->left!=nullptr){


ans =max({ans,left->val+right->val+root->val    ,root->val   ,left->val,   right->val, right->val+root->val,left->val+root->val});

return new TreeNode(max({left->val+root->val,right->val+root->val,root->val}));}



if(root->left!=NULL && root->right==nullptr){

ans =max({ans,left->val+root->val,root->val,left->val});

return new TreeNode(max({left->val+root->val,root->val}));
}



if(root->left==NULL && root->right!=nullptr){

ans =max({ans,right->val+root->val,root->val,right->val});

return new TreeNode(max({right->val+root->val,root->val}));
}


    
ans =max({ans,root->val});

return new TreeNode(root->val);




}

    int maxPathSum(TreeNode* root) {
      TreeNode*  temp=MaxPathsum(root);
return ans;
        
    }
};