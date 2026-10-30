class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
vector<long long> dist(n, 1e18); 
    vector<int> way(n,0);

    vector<vector<pair<int,int>>> adj(n);

    for(auto it : roads){

        adj[it[0]].push_back( {it[1],it[2]} );

         adj[it[1]].push_back( {it[0],it[2]} );




    }





        priority_queue<pair<long long, int>,
                                             vector<pair<long long, int>>,
                                                                            greater<pair<long long, int>>> pq;


    pq.push({0,0});
    dist[0]=0;
    way[0]=1;

const int MOD = 1000000007;

    while(!pq.empty()){

        long long time=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        
// Right after pq.pop();
if (time != dist[node]) continue; 

        for(auto it : adj[node]){

            if(dist[it.first] > time + it.second  ){

                    dist[it.first]=time + it.second;

                    way[it.first]=way[node]%MOD;

                    pq.push({dist[it.first],it.first});





            }


            else if(dist[it.first] == time + it.second){

                  way[it.first]=(way[node] + way[it.first])%MOD;


                // pq.push({dist[it.first],it.first});

            }



        }









    }

    





return way[n-1]%MOD;

 }


};