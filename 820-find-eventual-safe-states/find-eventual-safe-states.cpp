class Solution {
public:

bool dfs(int node , vector<vector<int>>& graph , vector<int>& safe,  vector<int>& path   ){
path[node]=1;
//visited[node]=1;



for(auto it: graph[node]){
    if(safe[it]==1){
       continue;
    }

if( path[it]==1 || safe[it]==-1 ){
    safe[node]=-1;
    return false;
}

bool c=dfs(it,graph,safe,path);

if(c==false){
     safe[node]=-1;
    return false;
}





}





path[node]=0;

safe[node]=1;
return true ;


}




    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>safe(graph.size(),0);
vector<int>path(graph.size(),0);
vector<int>ans;




for(int i=0;i<graph.size();i++){

if(safe[i]==0){
   int temp= dfs(i,graph,safe,path);
}

if(safe[i]==1){
    ans.push_back(i);
}









}



return ans;

    }
};