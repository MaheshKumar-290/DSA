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
    vector<vector<int>> levelOrder(TreeNode* root) {

queue<TreeNode*> q;
q.push(root);
vector<vector<int>> ans;
if(root==nullptr){
    return ans;
}



while(!q.empty()){
    int size=q.size();
    vector<int > level;

    for(int i=0;i<size;i++){
TreeNode* x=q.front();

     
                level.push_back(x->val);


        if(x->left!=nullptr){
            q.push(x->left);
        }
        if(x->right!=nullptr){
            q.push(x->right);
        }

q.pop();


    }
    ans.push_back(level);




}


return ans;
        
    }
};