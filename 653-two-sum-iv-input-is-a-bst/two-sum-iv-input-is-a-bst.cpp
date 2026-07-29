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

int nextt(stack<TreeNode*>& st){


TreeNode* ans =st.top();
int temp=ans->val;st.pop();



ans=ans->right;

while(ans){
    st.push(ans);
    ans=ans->left;
}







return temp;

}






int backward(stack<TreeNode*>& st2){




TreeNode* ans =st2.top();
int temp=ans->val;st2.pop();



ans=ans->left;

while(ans){
    st2.push(ans);
    ans=ans->right;
}









return temp;



}








    bool findTarget(TreeNode* root, int k) {


stack<TreeNode*>st1;
TreeNode* temp1=root;
while(temp1){
    st1.push(temp1);
    temp1=temp1->left;
}



stack<TreeNode*>st2;

while(root){
    st2.push(root);
    root=root->right;
}

int next=nextt(st1);
int back=backward(st2);

while(next!=back){

    if(next+back==k ){
        return true;
    }


if(next+back>k){
    back=backward(st2);
}


else{
    next=nextt(st1);
}

}




return false;
        
    }
};