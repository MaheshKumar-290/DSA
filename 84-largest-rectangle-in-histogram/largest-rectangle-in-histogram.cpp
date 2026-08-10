class Solution {
public:

vector<int> nxt_small(vector<int>& nums){

stack<int>st;
int n=nums.size();vector<int>ans(n);

for(int i=n-1;i>=0;i--){

while(!st.empty() &&  nums[st.top()]>=nums[i] ){
    st.pop();
}


ans[i]= st.empty()?n:st.top();

st.push(i);

}

return ans;
}




vector<int> prv_small(vector<int>& nums){

stack<int>st;
int n=nums.size();vector<int>ans(n);

for(int i=0;i<n;i++){

while(!st.empty() &&  nums[st.top()]>=nums[i] ){
    st.pop();
}


ans[i]= st.empty()?-1:st.top();

st.push(i);

}

return ans;
}














    int largestRectangleArea(vector<int>& heights) {
long ans=0;
int n=heights.size();

vector<int>next(n);
next=nxt_small(heights);

vector<int>prv(n);

prv=prv_small(heights);



for(int i=0;i<n;i++){

long lenght =next[i]- prv[i]-1;

ans=max(ans,lenght*heights[i]);

}





        return ans;






        
    }
};