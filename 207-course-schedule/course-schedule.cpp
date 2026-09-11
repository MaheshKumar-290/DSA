
class Solution {
public:


    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

vector<int>visited(numCourses,0);
vector<int>path(numCourses,0);

vector<vector<int>> adj(numCourses);
vector<int>indegree(numCourses,0);
int count=numCourses;

for(auto it: prerequisites ){

adj[it[1]].push_back(it[0]);
indegree[it[0]]++;

}


queue<int>qu;


for(int i=0;i<numCourses;i++){
    if(indegree[i]==0){
        qu.push(i);
        
        }
}




while(!qu.empty()){
int front=qu.front();
qu.pop();
count--;

for(auto it: adj[front]){

indegree[it]--;
if(indegree[it]==0){
    qu.push(it);

}

    
}










}








if(count==0){
    return true ;
}



return false;

    }


};
