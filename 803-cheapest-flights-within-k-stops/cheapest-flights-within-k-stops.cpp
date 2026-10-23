class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        

        vector<int> dist(n,INT_MAX);

    dist[src]=0;

vector<vector<pair<int,int>>>list(n);


for(auto it: flights){

    list[it[0]].push_back({it[1],it[2]});
}






  queue<std::array<int, 3>> qu;

    qu.push({src,0,0});


    while(!qu.empty()){

        auto temp=qu.front();
        qu.pop();


        for(auto it : list[temp[0]]){ 

                if(dist[it.first]>temp[1]+it.second && temp[2]<=k){

                        dist[it.first]=temp[1] +it.second;

                        qu.push({ it.first,dist[it.first], temp[2]+1});

                }
                     
         }

    }
if(dist[dst]==INT_MAX){
    return -1;

}

return dist[dst];
    }
};