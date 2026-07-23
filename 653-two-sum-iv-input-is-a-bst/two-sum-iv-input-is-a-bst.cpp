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
bool find(TreeNode* root,int t){
bool left=false;
bool right=false;


if(root==nullptr){
    return false;
}

if(root->val==t){
    return true;
}

else if(root->val>t){
   left= find(root->left,t);
}

if(left){
    return true;
}

else if(root->val<t){
  right = find(root->right,t);
}


return right;

}


    bool FindTarget(TreeNode* root, int k,TreeNode* parent) {


        if(root==nullptr){
            return false;
        }


if(k==2*root->val){
    
}
  else  if(find(parent,k-root->val)){
            return true ;
        }


        bool left=FindTarget(root->left,k,parent);

if(left){
    return true;
}
         bool right=FindTarget(root->right,k,parent);
        if(left || right){
            return true;
        }
        

        return false;
    }



    bool findTarget(TreeNode* root, int k) {


        if(root==nullptr){
            return false;
        }

return FindTarget(root,k,root);

      
}
};