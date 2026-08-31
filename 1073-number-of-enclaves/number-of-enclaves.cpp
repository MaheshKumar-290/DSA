class Solution {
public:


void dfs(int i,int j , vector<vector<int>>& visited, vector<vector<int>>& grid, int& count ,int& flag  ){
visited[i][j]=1;
int n=grid.size();
int m=grid[0].size();
count++;
int row[]={0,-1,0,1};
int col[]={1,0,-1,0};

for(int x=0;x<4;x++){
int a=i+row[x];
int b=j+col[x];

if( a>-1 && b>-1 && a<n && b<m  ){


if( grid[a][b]==1 && visited[a][b]==-1  ){

    dfs(a,b,visited,grid,count,flag);
     
}


}

else if(a<0 ||  b<0 ||  a==n ||  b==m){

flag=-1;



}




}




if (flag==-1){
    count =0;

}




}








    int numEnclaves(vector<vector<int>>& grid) {
int n=grid.size();
int m=grid[0].size();

        vector<vector<int>>visited(n,vector<int>(m,-1));

int ans=0;

int flag=0;


for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

        if(grid[i][j]==1 && visited[i][j]==-1){
int count =0;
flag=1;

dfs(i,j,visited,grid,count,flag);
ans+=count;




        }



    }
}


return ans;
    }
};