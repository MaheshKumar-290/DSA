class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;

for(int i=0; i<nums.size();i++){
int lowest=nums[i];
int highest=nums[i];

for(int j=i;j<nums.size();j++){

lowest=min(lowest,nums[j]);
highest=max(highest,nums[j]);


ans+=highest-lowest;


}




}

return ans;

    }
};