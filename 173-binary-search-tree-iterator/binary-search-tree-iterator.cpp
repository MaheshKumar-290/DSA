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
class BSTIterator {
public:

void lnr(TreeNode* root,vector<int>& store){

if(root==nullptr){
    return;
}


lnr(root->left,store);
store.push_back(root->val);
lnr(root->right,store);


}

vector<int> store;


int pointer=-1;
       


    BSTIterator(TreeNode* root) { 


        lnr(root,store);
    }
    
    int next() {
        pointer++;
return store[pointer];

    }
    


    bool hasNext() {

        return pointer+1<store.size();
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */