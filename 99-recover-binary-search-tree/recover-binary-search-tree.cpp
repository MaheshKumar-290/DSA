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

void dfs(vector<int>& check,TreeNode* root){
if(root==nullptr){
    return;
}
dfs(check,root->left);
check.push_back(root->val);
dfs(check,root->right);

}



void find(int t1,int t2,TreeNode* root){


    if(root==nullptr){
        return;
    }
if(root->val==t1){
    root->val=t2;
}

else if(root->val==t2){
    root->val=t1;
}

find(t1,t2,root->left);
find(t1,t2,root->right);




}





    void recoverTree(TreeNode* root) {
vector<int>check;

int target1=INT_MIN;
int target2=INT_MIN;

dfs(check,root);

int s=check.size();

check.push_back(INT_MAX);
int flag=0;


for(int i=1;i<s;i++){

 if(check[i-1]>check[i]){
    flag++;
//find the problematic

if(check[i-1]<check[i+1]){

    if(target1==INT_MIN){
    target1=check[i];
    target2=check[i-1];}


    else{
        target2=check[i];
        break;
    }
}

else{
    target1=check[i-1];
    target2=check[i+1];
   
}


 }

if(flag==2){
    break;
}


}



find(target1,target2,root);





        
    }
};