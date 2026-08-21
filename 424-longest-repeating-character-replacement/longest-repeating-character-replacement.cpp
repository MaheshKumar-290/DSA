class Solution {
public:
    int characterReplacement(string s, int k) {

      vector<int>freq(28,0);
int n=s.size();
int maxfreq=0;

int j=0;
int ans=0;

      for(int i=0;i<n;i++){

        freq[s[i]-'A']++;
        maxfreq=max(maxfreq,freq[s[i]-'A']);
  //check
     while(i-j-maxfreq+1>k){

        freq[s[j]-'A']--;

        //update the new freq
for(int x=0;x<28;x++){
    maxfreq=max(maxfreq,freq[x]);
    
}
        j++;

        }


ans=max(ans,i-j+1);


      }

        return ans;
    }
};