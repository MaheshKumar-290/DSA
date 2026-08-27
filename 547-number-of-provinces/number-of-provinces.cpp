
class Solution {
public:




    int findCircleNum(vector<vector<int>>& isConnected) {

        int n= isConnected[0].size();

vector<int>visited(n,-1);

int ans=0;


for(int i=0;i<n;i++){
queue<int>qu;

    if(visited[i]==-1){
        visited[i]=1;
        ans++;
qu.push(i);

    }

    while(!qu.empty()){

int node =qu.front();

qu.pop();
int j=0;


for(int j=0;j<n;j++){

    if(isConnected[node][j]==1 &&  visited[j]==-1 ){
 qu.push(j);
  //  ans++;
    visited[j]=1;

    }
}







    }

}









return ans;
        

    }
};