class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       
        int n=nums.size();
     
int j=0;
int ans=0;
int count=0;

        for(int i=0;i<n;i++){

if(nums[i]==0){
    k--;
}


if(k<0){
    if(nums[j]==0){
        k++;
    }
    j++;

}





if(k>=0){
ans=max(i-j+1,ans);
}


        }


return ans;

    }
};