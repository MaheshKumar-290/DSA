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

void dfs(TreeNode* root,int i,int j, vector<tuple<int,int,int>>&t){

if(root==nullptr){
    return;
}
t.push_back({i,j,root->val});

dfs(root->left,i-1,j+1,t);
dfs(root->right,i+1,j+1,t);

}



    vector<vector<int>> verticalTraversal(TreeNode* root) {

//traversal

vector<tuple<int,int,int>> t;
dfs(root,0,0,t);
sort(t.begin(),t.end());

vector<vector<int>> ans ;
int last=get<0>(t[0]);
vector<int > temp;
for(auto it:t){


if(get<0>(it)==last){

    temp.push_back(get<2>(it));
}
    else{
        ans.push_back(temp);
        temp.clear(); temp.push_back(get<2>(it));
    }

last=get<0>(it);




}

ans.push_back(temp);













return ans;
        
    }
};