class MyStack {
public:

queue<int>* qu;

    MyStack() {

        qu=new queue<int>;
        
    }
    
    void push(int x) {
        qu->push(x);
        
    }
    
    int pop() {

    int temp;
int size=qu->size();

while(size>1){
    size--;

    qu->push(qu->front());
    qu->pop();

}
temp=qu->front();
qu->pop();
return temp;


        
    }
    
    int top() {



    int temp;
int size=qu->size();

while(size>1){
    size--;

    qu->push(qu->front());
    qu->pop();

}
temp=qu->front();
   qu->push(qu->front());
    qu->pop();
    return temp;
        
    }
    
    bool empty() {

return qu->size()==0;

        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */