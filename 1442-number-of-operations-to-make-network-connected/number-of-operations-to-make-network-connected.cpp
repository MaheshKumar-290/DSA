class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
     int ans=0;

        if(connections.size()+1 <n ){
            return -1;

        }
        vector<int> visited(n,-1);


        vector<vector<int>>adj(n);


        for(auto it: connections){
            adj[it[0]].push_back(it[1]);

            adj[it[1]].push_back(it[0]);

        }
       


        for(int i=0;i<n;i++){


         if(visited[i] == -1  ){

            ans++;


          queue<int>qu;         
       
        qu.push(i );
        visited[i]=1;



        while(!qu.empty()){

                int temp=qu.front();
            qu.pop();






        for(auto it: adj[temp]){

           if(visited[it] == -1  ){


            qu.push(it);
            visited[it] = 1; 

           }


        }


        }





           }


        }




        
return ans-1;


        }














    }
;