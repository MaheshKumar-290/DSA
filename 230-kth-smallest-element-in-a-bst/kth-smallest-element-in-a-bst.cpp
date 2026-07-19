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

int iot(TreeNode* root,int k,int& index){

if(root==nullptr){
    return 0;
}


        
 int right = iot(root->left,k,index);
       index++;
       if(index==k){
            return root->val;
        }
 int left=iot(root->right,k,index);

if(right>left){
    return right;
}

    return left;

}


    int kthSmallest(TreeNode* root, int k) {


        if(root==nullptr){

                return 0;

        }
int ans=0;
int x= iot(root,k,ans);









        return x;
    }
};