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
TreeNode* tree(vector<int>& preorder,int& i,int s,int max){


TreeNode* temp=new TreeNode(preorder[i]);

if(i+1<s){

//not out of bound
 if(preorder[i+1]<preorder[i]){
    i++;
    temp->left=tree(preorder,i,s,temp->val);

}


if(i+1<s){ 
 if(max<preorder[i+1]){

    return temp;
}

if(preorder[i+1]>preorder[i]){

    i++;
    temp->right=tree(preorder,i,s,max);
   
}

}


}


return temp;

}



    TreeNode* bstFromPreorder(vector<int>& preorder) {

if(preorder.empty()){
    return nullptr;
}

int s=preorder.size();
int j=0;
TreeNode* ans=tree(preorder,j,s,INT_MAX);

  return ans;      
    }
};