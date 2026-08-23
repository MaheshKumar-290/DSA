class Solution {
public:


int help(vector<int>& nums,int k){
if(k<0){
    return 0;
}
int n=nums.size();
int j=0;
int count=0;
int ans=0;

for( int i=0;i<n;i++){
if(nums[i]%2!=0){
    count++;
}

while(count>k){

if(nums[j]%2!=0){
    count--;
}

j++;

}

if(count<=k){
ans+=i-j+1;
}

}

return ans;
        
    }








    int numberOfSubarrays(vector<int>& nums, int k) {
    
    
    return help(nums,k) -help(nums,k-1);
    
    }
};