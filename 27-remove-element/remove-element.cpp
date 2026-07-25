class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int s=nums.size();
        int last=s-1;


        for(int i=0;i<=last;i++){
            while(last >=i &&  nums[last]==val){
                last--;
            }
            if(last==-1){
                return 0;
            }

if(nums[i]==val &&  last >=i){
    swap(nums[i],nums[last]);
    last--;
}


        }


return s-(s-last-1);
    }
};