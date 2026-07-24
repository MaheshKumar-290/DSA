class Solution {
public:
    int reverse(long x) {

int ans=0;
int flag=0;
if(x<0){
    flag=1;
}
x=abs(x);




        while(x>0){

            if(ans>INT_MAX/10){
                return 0;
            }

                ans=ans*10+(x%10);

x=x/10;


        }

        if(flag==1){
            ans=-1*ans;
        }
        return ans;



        
    }
};