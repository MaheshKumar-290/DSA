
class Solution {
public:

    int lengthOfLongestSubstring(string s) {

       
       int j=0;

int ans=0;
vector<int> mp(128,-1);
// int mp[256];
// fill(begin(mp),end(mp),-1);

    for(int i=0;i<s.size();i++){

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