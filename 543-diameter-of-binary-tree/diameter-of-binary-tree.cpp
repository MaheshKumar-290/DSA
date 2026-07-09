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
int height(TreeNode* root){
    if(root==nullptr){
        return 0;
    }

int left=height(root->left);
int right=height(root->right);


return max(left,right)+1;


}

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }

int l_max=0;
int r_max=0;
int ans=0;
// int h=height(root);


int left =height(root->left);
int right=height(root->right);

if(      left+right >ans){
    ans =left+right;

}

// else if(  root->left==nullptr && root->right!=nullptr &&    left+right +1 >ans){
//     ans =left+right+1;

// }
// else if(  root->left!=nullptr && root->right==nullptr &&    left+right +1 >ans){
//     ans =left+right+1;

// }



l_max=diameterOfBinaryTree(root->left);
r_max=diameterOfBinaryTree(root->right);



return max(max(l_max,r_max),ans);
        
    }
};