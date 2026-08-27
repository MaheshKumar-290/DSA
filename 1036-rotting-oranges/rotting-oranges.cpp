class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {


//find 
//vector<vector<int>>visited(grid.size(), vector<int>(grid[0].size(),-1));


queue<vector<pair<int,int>>>qu;
int ans=0;

vector<pair<int,int>>level;

for(int i=0;i<grid.size();i++){

for(int j=0 ;j<grid[0].size();j++){
  
    if(grid[i][j]==2){

level.push_back({i,j});

//visited[i][j]=1;

    }


}


}


// if(level.empty()){
//     return -1;
// }

qu.push(level);



//main



while(!qu.empty()){


 vector<pair<int,int>> level2=qu.front();
  vector<pair<int,int>> temp;
qu.pop();


for( int x=0;x<level2.size();x++){

pair<int,int>it=level2[x];


   int i=it.first;
    int j=it.second;

//left
    if(j-1>=0  ){

        if( grid[i][j-1] ==1   ){
            temp.push_back({i,j-1});
             grid[i][j-1] =2; 
        }

    }

//right
        if(j+1<grid[0].size() ){

        if( grid[i][j+1] ==1    ){
            temp.push_back({i,j+1});
grid[i][j+1] =2;

        }

    }


//top


    
 if(i+1<grid.size() ){

        if( grid[i+1][j] ==1   ){
grid[i+1][j] =2;

            temp.push_back({i+1,j});
        }

    }

//botto,

 if(i-1>=0 ){

        if( grid[i-1][j] ==1    ){
            temp.push_back({i-1,j});
            grid[i-1][j] =2; 
        }

    }




}



if(!temp.empty()){
    ans++;


qu.push(temp);

}





}



//check again for 1
for(int i=0;i<grid.size();i++){

for(int j=0 ;j<grid[0].size();j++){
  
    if(grid[i][j]==1){
return -1;

    }


}


}





return ans;
        
    }
};