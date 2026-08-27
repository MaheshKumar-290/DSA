class Solution {
public:



    int numberOfSubstrings(string s) {
int n=s.size();

vector<int> track(3,-1);

int count =0;
int ans=0;
int j=n;

for(int i=n-1;i>-1;i--){


if(track[s[i]-'a']==-1){
  count++;
}


  track[s[i]-'a']=i;


if(count==3){


j=max({track[0],track[1],track[2]});



ans+=n-j;


}


}
    return ans;    
    }
};