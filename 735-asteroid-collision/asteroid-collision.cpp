class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

stack<int>st;
for(int i=0;i<asteroids.size();i++){
 int flag=0;
while(!st.empty() && st.top()>0 && asteroids[i]<0       ){
   


    if(st.top()<abs(asteroids[i]) ){
        st.pop();

    }


    else if(st.top()>abs(asteroids[i])){
       
           flag=1;
        break;
    

    }


else{
    // both
    flag=1;
    st.pop();
    break;
}


}



if(flag!=1){
st.push(asteroids[i]);}


}


vector<int>ans(st.size());

for(int i=st.size()-1;i>=0;i--){

ans[i]=st.top();
st.pop();


}






return ans;
        
    }
};