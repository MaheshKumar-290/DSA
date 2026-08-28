class Solution {
public:


void dfs(vector<vector<int>>& image, int sr, int sc, int color,int org){
   
        int n=image.size();
        int m=image[0].size();



int row[]={-1,0,1,0};
int col[]={0,1,0,-1};

for( int i=0 ;i<4 ;i++){
int r=sr+row[i];
int c=sc+col[i];

if(r>=0 && r<n && c>=0 && c<m){

if(image[r][c]==org ){
   image [r][c]=color;
  // visited[r][c]=1;

    dfs(image,r,c,color,org);
}

}




}







}




    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n=image.size();
        int m=image[0].size();


        int org=image[sr][sc];

        if(color == org){
    return image;}

//vector<vector<int>> visited(n,vector<int>(m,-1));


image[sr][sc]=color;
dfs(image,sr,sc,color,org);







return image;

    }
};