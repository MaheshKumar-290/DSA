class Solution {
public:

void dfs(int i,int j,vector<vector<char>>& grid  ){
grid[i][j]='0';
int n=grid.size();
int m=grid[0].size();
int row[]={0,-1,0,1};
int col[]={1,0,-1,0};

for(int l=0;l<4;l++){
    int x=i+row[l];
    int y=j+col[l];


    if( x>-1 && x<n && y>-1 && y<m  ){
if(grid[x][y]=='1'){
    dfs(x,y,grid);
}


    }


}





}





    int numIslands(vector<vector<char>>& grid) {

int ans=0;
int n=grid.size();
int m=grid[0].size();


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

if(grid[i][j]=='1'){
    ans++;


    dfs( i,j, grid);

}




    }
}



        return ans;
    }
};