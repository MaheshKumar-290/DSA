
class Solution {
public:

    int lengthOfLongestSubstring(string s) {

       int i=0;
       int j=0;
int n=s.size();
int ans=0;

map<char,int>mp;


    for(i=0;i<n;i++){

        if(mp.find(s[i])==mp.end()){
           
            mp[s[i]]=i;

            ans=max(ans,i-j+1);



        }


        else{

while(j<mp[s[i]]+1){

mp.erase(s[j]);

    j++;
}



   
            mp[s[i]]=i;


        }

    }



        return ans;
    }
};