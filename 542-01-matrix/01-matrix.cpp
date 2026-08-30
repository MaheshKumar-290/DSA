class Solution {




public:




void bsf( int i,int j ,vector<vector<int>>& visited,vector<vector<int>>& mat){

 int n=mat.size();
        int m=mat[0].size();
int row[]={0,-1,0,1};
int col[]={1,0,-1,0};


        queue<pair<int,int>>qu;
        qu.push({i,j});

        while(!qu.empty()){
            auto node =qu.front();
            qu.pop();

            for(int x=0;x<4;x++){
                int r=row[x]+node.first;
                int c=col[x]+node.second;


                if(r>-1 && r<n && c<m && c>-1 ){

                    
                 if(visited[r][c]==-1  && mat[r][c]==0 )  { qu.push({r,c});}

                      else if(mat[r][c]>mat[node.first][node.second]+1    || (visited[r][c]==-1 && mat[r][c]==1)  ){
                            mat[r][c]=mat[node.first][node.second]+1;
                            qu.push({r,c});


                        }



                        visited[r][c]=1;




                }



            }

            







        }








}





    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();









         vector<vector<int>>visited(n,vector<int>(m,-1));

         for( int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                if(mat[i][j]==0  && visited[i][j]==-1){
                    bsf(i,j,visited,mat);
                }





            }
         }
         return mat;
    }
};