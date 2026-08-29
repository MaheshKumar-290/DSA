class Solution {
public:


bool dfs(int node ,vector<vector<int>>& adj,vector<int>& path, vector<int>& visited   ){

path[node] =1;
 visited[node] =1;



for(auto it : adj[node] ){

    if(visited[it]==0){
        
    if( dfs(it,adj,path,visited ) ){    return true;}        
 
    }

    else if( path[it]== 1. ){
        return true ;
    }


}




path[node]=0;

return false;


}









    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

vector<int>visited(numCourses,0);
vector<int>path(numCourses,0);

vector<vector<int>> adj(numCourses);


for(auto it: prerequisites ){
adj[it[0]].push_back(it[1]);
}



for(int i=0;i<numCourses;i++){

if(visited[i]!=1){
   if( dfs(i,adj,path,visited)) return false;
}


}






return true;

    }
};