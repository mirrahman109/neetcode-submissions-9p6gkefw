class MinStack {
public:

    stack<int>s;
    stack<int>minstack;
    int min = INT_MAX;

    MinStack() {

    }
    
    void push(int val) {
        s.push(val);

        if(minstack.empty() || val <= minstack.top()){
                    minstack.push(val);

        }
        else{
            minstack.push(minstack.top());
        }
    }
    
    void pop() {
        s.pop();
        minstack.pop();
    }
    
    int top() {
       return s.top(); 
    }
    
    int getMin() {
       return minstack.top(); 
    }
};
