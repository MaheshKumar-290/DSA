class Solution {
public:


bool check(string a, string b){


int size=a.size();
int flag=0;

for(int i=0;i<size;i++){

if(a[i]!=b[i]){
    flag++;

    if(flag>1){
        return false;
    }
}



}



if(flag==1){
return true;}

return false;
}




    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {


queue<pair<string,int> >qu;
int n= wordList.size();
vector<int>visited(n,-1);




for(int i=0 ;i <n ;i++){

    if(check(beginWord , wordList[i]) && visited[i]==-1){
        qu.push({ wordList[i],1});
        visited[i]=1;

    }
}

while(!qu.empty()){

pair <string,int> temp=qu.front();
qu.pop();

if(temp.first==endWord){

    return temp.second+1;
}



for(int i=0 ;i <n ;i++){

    if( visited[i]==-1  && check(temp.first , wordList[i])){
        qu.push({ wordList[i],temp.second+1});
        visited[i]=1;

    }
}







}


return 0;
        
    }
};