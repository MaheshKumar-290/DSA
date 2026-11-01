class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
  int ans =0;

vector<vector<pair<int,int>>> adj(n);

for(auto it : edges ){

    adj[it[0]].push_back({it[1],it[2]});

    adj[it[1]].push_back({it[0],it[2]});


}



int th=1e9;


for(int i=0 ; i<n ;i++){
    int count=0;


priority_queue< pair<int ,int> , vector<pair<int,int>>, greater<pair<int ,int >>> pq;
vector<int> dist(n,1e9);


pq.push({0,i});
dist[i]=0;




while(!pq.empty()){


int distance=pq.top().first;
int node=pq.top().second;

pq.pop();


for(auto it: adj[node]){


if(dist[it.first] > distance + it.second && distance + it.second <= distanceThreshold    ){
    
    
    if(dist[it.first]==1e9){
    count++;
    if(count>th){
        break;

    }
    }
 

dist[it.first] = distance + it.second;

pq.push({dist[it.first],it.first});

}

}

 }



if(  th>= count   ){
    th=count;
    ans=i;
}



}



return ans; ;



    }
};