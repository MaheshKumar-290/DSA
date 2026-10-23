class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& height) {
        
int n=height.size();
int m = height[0].size();


vector<vector<int>> d(n,vector(m,INT_MAX));
d[0][0]=0;

std::priority_queue<
    std::pair<int, std::pair<int, int>>, 
    std::vector<std::pair<int, std::pair<int, int>>>, 
    std::greater<std::pair<int, std::pair<int, int>>>
> pq;



pq.push({0,{0,0}});


while(!pq.empty()){

auto temp= pq.top();
pq.pop();

int dist=temp.first;

int x=temp.second.first;
int y=temp.second.second;
if (dist > d[x][y]) continue;

if(x==n-1 && y==m-1){
return dist;


}


int row[]={0,-1,0,1};
int col[]={-1,0,1,0};

for(int i=0;i<4;i++){
    int nx=x+row[i];
    int ny=y+col[i];




    if(nx>-1 && ny>-1 && nx<n && ny<m){

int abs_dist = max(
    dist,
    (int)abs((long long)height[nx][ny] - height[x][y])
);

if(d[nx][ny]>abs_dist){
d[nx][ny]=abs_dist;



pq.push({abs_dist,{nx,ny}});


}



    }




}















}





return -1;


    }
};