class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        



vector<int>ans;
//vector<int>path(numCourses,0);

vector<vector<int>> adj(numCourses);
vector<int>indegree(numCourses,0);


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
ans.push_back(front);
qu.pop();


for(auto it: adj[front]){

indegree[it]--;
if(indegree[it]==0){
    qu.push(it);

}

    
}










}








if(ans.size()!=numCourses){
   ans.clear()  ;
}



return ans;







    }
};