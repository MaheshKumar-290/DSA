class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {


int sum=0;
sum=accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
int j=cardPoints.size()-1;

int ans=sum;k--;

        while(k>=0){

            sum=sum-cardPoints[k]+cardPoints[j];
            j--;
            k--;



ans=max(ans,sum);


        }

return ans;

    }
};