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
    bool isSymmetric(TreeNode* root) {

        queue<TreeNode*>q;

        q.push(root);



        while(!q.empty()){
           
           int size=q.size();
             int level[size];



              for(int i=0;i<size;i++){
                if(q.front()==nullptr){
                    level[i]=-19304857;
                }
                else{

                level[i]=q.front()->val;
                
             q.push(q.front()->left);
              q.push(q.front()->right);
                }

                q.pop();
              }


              // check symetry
              for(int i=0;i<size/2;i++){

                    if(level[i]!=level[size-1-i]){
                        return false;
                    }


              }





        
      
        
    }
     return true;
}
};