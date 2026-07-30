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

class bacha{

public:
int min;
int max;

int sum;

bacha(int lower,int upper,int sum){
    this->min=lower;
    this->max=upper;
    
    this->sum=sum;



}


};


class Solution {
public:

bacha dfs(TreeNode* root,int& maxx){
if(root==nullptr){
    return bacha(INT_MAX,INT_MIN,0);
}

auto  left=dfs(root->left,maxx);



auto right=dfs(root->right,maxx);



//valid

    if(left.max<root->val && right.min>root->val){

   maxx=max(left.sum+right.sum+root->val,maxx);




   return bacha(min(root->val,left.min),max(root->val,right.max),left.sum+right.sum+root->val);
    }



return bacha(INT_MIN,INT_MAX,0);

}





    int maxSumBST(TreeNode* root) {

int ans=0;

bacha x =dfs(root,ans);



        return ans;
    }
};