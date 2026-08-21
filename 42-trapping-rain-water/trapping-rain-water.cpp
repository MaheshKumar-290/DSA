class Solution {
public:

vector<int> nxt_gr(vector<int>& nums){
int g=-1;
int n=nums.size();
vector<int>ans(n);
for(int i=nums.size()-1;i>=0;i--){

  g=max(g,nums[i]);

  if(g>nums[i]){
    ans[i]=g;

  }
  else{
    ans[i]=-1;
  }



}
return ans;

}



vector<int> prv_gr(vector<int>& nums){
    int n=nums.size();
vector<int>ans(n);
//stack<int>st;
int g=-1;

for(int i=0;i<n;i++){

  g=max(g,nums[i]);

  if(g>nums[i]){
    ans[i]=g;

  }
  else{
    ans[i]=-1;
  }






}
return ans;

}



    int trap(vector<int>& height) {
        int n=height.size();
       vector<int>nxt_grt(n);
        vector<int>prv_grt(n);
nxt_grt=nxt_gr(height);
prv_grt=prv_gr(height);

int store=0;

for(int i=0;i<height.size();i++){

int left=prv_grt[i];
int right=nxt_grt[i];

int h=min(left,right);


store += max(0,h-height[i]);

}


return store;
        
    }
};