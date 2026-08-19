class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
 int tsum=0;
 tsum=accumulate(cardPoints.begin(),cardPoints.end(),0);
int n=cardPoints.size();

int window=0;
window=accumulate(cardPoints.begin(),cardPoints.end()-k,0);
int minw=window;
//re,ove the arrey of size n-k with min sum
int left=0;

while(k){

window=window-cardPoints[left]+cardPoints[n-k];
minw =min(minw,window);
left++;
k--;


}












return tsum-minw;

}


    
};