
class Solution {
public:

    int lengthOfLongestSubstring(string s) {

       int i=0;
       int j=0;
int n=s.size();
int ans=0;

int mp[256];
fill(begin(mp),end(mp),-1);

    for(i=0;i<n;i++){

        if(mp[s[i]]==-1){
           
            mp[s[i]]=i;

            ans=max(ans,i-j+1);

        }
        else{

while(j<mp[s[i]]+1){

mp[s[j]]=-1;

    j++;
}



   
            mp[s[i]]=i;


        }

    }



        return ans;
    }
};