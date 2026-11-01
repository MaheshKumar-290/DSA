class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
int ans =0;

priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> > pq;

int n = grid[0].size();


vector<vector<int>> visited(n,vector(n,0) );

pq.push({grid[0][0],{0,0}});


while(!pq.empty()){
int row[]={1,0,-1,0};
int col[]={0,-1,0,1};


int r=pq.top().second.first;
int c=pq.top().second.second;
int h=pq.top().first;
pq.pop();


ans=max(ans,h);

for(int i=0;i<4;i++){

int r1=row[i]+r;
int  c1=col[i]+c;

if(r1>=0 && c1>=0 && r1<n && c1<n  && visited[r1][c1]!=1){


if(r1==n-1 && c1==n-1){
ans=max(ans,grid[n-1][n-1]);

return ans;



}


visited[r1][c1]=1;

pq.push({ grid[r1][c1] ,{r1,c1} });




}



}










}












        return ans;
    }
};