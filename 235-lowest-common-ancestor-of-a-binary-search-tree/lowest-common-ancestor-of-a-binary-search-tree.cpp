/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
TreeNode* ans=nullptr;
        if(root==p){
            return p;
        }
        else if (root==q){
        return q;
        }


        else if(root->val>p->val  && root->val>q->val){
         ans=   lowestCommonAncestor(root->left,p,q);



        }

        else if(root->val<p->val  && root->val<q->val){
           ans= lowestCommonAncestor(root->right,p,q);



        }

//root val is betweern them
     else   {ans=root;}




return ans;

    }






};