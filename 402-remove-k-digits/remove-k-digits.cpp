class Solution {
public:


    string removeKdigits(string num, int k) {
        stack<char>st;
int s=k;
        string ans(num.size()-k,' ') ;
        

        for(int i=0;i<num.size();i++){

            while(!st.empty() && st.top() > num[i] && k>0){
                st.pop();
                k--;
            }

st.push(num[i]);



        }


        while(!st.empty() && k>0){

            k--;
            st.pop();

        }


        for(int i=num.size()-s-1;i>=0;i--){
ans[i]=st.top();
st.pop();

        }

while(ans[0]=='0')
    ans.erase(ans.begin());
if(ans.size()==0){
    ans+='0';
}
return ans;

    }
};