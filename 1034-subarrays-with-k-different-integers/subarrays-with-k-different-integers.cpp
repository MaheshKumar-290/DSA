class Solution {
public:


int help(vector<int>& nums,int k){
    if(k==0){
        return 0;
    }

 int j=0;
       // int n=n;
unordered_map<int,int>mp;
int ans=0;

        for(int i=0;i<nums.size();i++){

            mp[nums[i]]++;


            while(mp.size()>k){

                mp[nums[j]]--;

                if(mp[nums[j]]==0){
                    mp.erase(nums[j]);
                }

                j++;
            }
                ans+=i-j+1;
            
        }
        
return ans;
}



    int subarraysWithKDistinct(vector<int>& nums, int k) {

       
return help(nums,k) -help(nums,k-1);
    }
};