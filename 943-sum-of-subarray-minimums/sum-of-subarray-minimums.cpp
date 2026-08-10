class Solution {
public:

vector<int> next_small(vector<int> nums){
stack<int>st;

vector<int>ans(nums.size());

for(int i=nums.size()-1;i>=0;i--){

while(!st.empty() && nums[st.top()]>=nums[i]){
st.pop();
}


ans[(i)]=  st.empty()? nums.size():st.top() ;
st.push(i);
}
return ans;


}


vector<int> prv_small(vector<int> nums){
stack<int>st;

vector<int>ans(nums.size());
for(int i=0;i<=nums.size()-1;i++){

while(!st.empty() &&nums[st.top()]>nums[i]){
st.pop();
}


ans[i]=  st.empty()? -1:st.top() ;

st.push(i);
}
return ans;


}



    int sumSubarrayMins(vector<int>& arr) {



vector<int>p_small(arr.size());
p_small=prv_small(arr);

vector<int>n_small(arr.size());
n_small=next_small(arr);

   long long ans = 0;
        int MOD = 1000000007;

for(int i=0;i<arr.size();i++){
 long long left = i - p_small[i];
            long long right = n_small[i] - i;

            long long contribution = left * right;

            long long val = (1LL * arr[i] * contribution) % MOD;

            ans = (ans + val) % MOD;

}



        return ans ;
    }

};