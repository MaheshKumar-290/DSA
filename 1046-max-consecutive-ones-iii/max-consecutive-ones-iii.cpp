class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       
        int n=nums.size();
     
int j=0;
int ans=0;
int count=0;

        for(int i=0;i<n;i++){

if(nums[i]==0 ){

if(k>0){
    k--;
}
else{

    while(nums[j]!=0 && j<i){
        j++;
        count--;
    }
    count--;
    j++;
   
}



}
count++;

ans=max(count,ans);

        }


return ans;

    }
};