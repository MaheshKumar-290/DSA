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
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==nullptr){
            return nullptr;
        }


        else if(root->val>key){
            root->left=deleteNode(root->left,key);

        }

         else if(root->val<key){
            root->right=deleteNode(root->right,key);
            
        }
        else{   //equal

auto temp=root;

        if(root->left ==nullptr && root->right==nullptr){
            return nullptr;
        }

        else if(root->left==nullptr){
            return root->right;
        }
        else if(root->right==nullptr){
            return root->left;
        }

else{

//both child exist

//find right smallest=
auto target=root->right;
root=root->right->left;
auto back=temp;

while(root){
    back=target;
    target=root;
    root=root->left;






}


if(back!=temp){
    if(target->right==nullptr)back->left=nullptr;
    else{
        back->left=target->right;
    }
}
target->left=temp->left;



if(target!=temp->right) target->right=temp->right;


    return target;


delete temp;
delete target;

}




        }

      //  delete temp;


        return root;
    }
};