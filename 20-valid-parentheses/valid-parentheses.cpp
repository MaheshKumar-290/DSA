class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(auto it :s){
           
        if(!st.empty()) {   if(st.top()=='('  && it==')'  || st.top()=='{'  && it=='}'  || st.top()=='['  && it==']'){
                st.pop();

            }
            else if(it==')' && st.top()!=')'){
                return false;
            }
              else if(it=='}' && st.top()!='}'){
                return false;
            }
              else if(it==']' && st.top()!=']'){
                return false;
            }
            else{
                st.push(it);
            }



        }
        else{
            st.push(it);
        }
        
        
        
        
        }
        return st.empty();
    }
};