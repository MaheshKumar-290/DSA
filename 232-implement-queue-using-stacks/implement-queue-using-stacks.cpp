class MyQueue {
public:
stack<int>* st;
    MyQueue() {
        st=new stack<int>;
        
    }
    
    void push(int x) {
        st->push(x);

        
    }





    
    int pop() {
        int size=st->size();
stack<int>temp;

while(size-->1){

temp.push(st->top());
st->pop();


}

int ans=st->top();
st->pop();

size=temp.size();
while(size--){
    st->push(temp.top());temp.pop();
}

    return ans;    
        
    }



    
    int peek() {

stack<int>temp;
        int size=st->size();

        while(size-->0){
temp.push(st->top());st->pop();

        }
        int ans = temp.top();

size=temp.size();
     while(size-->0){
st->push(temp.top());temp.pop();

        }
        return ans;
    }
    
    bool empty() {
        return st->empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */