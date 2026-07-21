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

bool check(TreeNode* root,long lower ,long upper  ){

if (root == nullptr){
    return true;
}

else if(root->val<=lower || root->val>=upper){
    return false ;
}

bool left=check(root->left,lower,root->val);
bool right=check(root->right,root->val ,upper);
if(left==false || right==false){
    return false;
}

return true;

}


    bool isValidBST(TreeNode* root) {


        bool check1=check(root,LONG_MIN,LONG_MAX);
        return check1;
        

        
    }
};