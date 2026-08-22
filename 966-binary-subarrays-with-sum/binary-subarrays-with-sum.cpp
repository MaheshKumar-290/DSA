class Solution {
public:

int help(vector<int>& nums,int goal){

int ans=0;
if(goal<0){
    return 0;

}
int j=0;

int sum=0;


for(int i=0;i<nums.size();i++){

sum+=nums[i];


while(sum>goal){
    sum-=nums[j];
    j++;

}

ans+=(i-j+1);


}



return ans;

}



    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
         




   return help(nums,goal) - help(nums,goal-1);    
        
    }
};