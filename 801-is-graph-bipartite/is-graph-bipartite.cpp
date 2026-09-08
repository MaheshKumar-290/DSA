class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {


int n=graph.size();


vector<int> col(n,-1);

for(int j=0;j<n;j++){

queue<int>qu;
if(col[j]==-1){
col[j]=1;
qu.push(j);
}


while(!qu.empty()){

int temp=qu.front();
qu.pop();


for(int i=0;i<graph[temp].size();i++){

if(col[graph[temp][i]]==col[temp]){
    return false ;
}



if(col[graph[temp][i]]==-1){
    //not visited 

if(col[temp]==1){
    col[graph[temp][i]]=0;

}

else{
        col[graph[temp][i]]=1;

}

qu.push(graph[temp][i]);

}




}


}

}


return true;


        
    }
};