class MinStack {
private:
    std::stack<int> minStack;
    std::stack<int> mainStack;
public:
    MinStack() 
    {
    }
    void push(int val) {
        mainStack.push(val);

        if(minStack.empty())
        {
            minStack.push(val);
        } 
        else 
        {
        minStack.push(std::min(val, minStack.top()));
        }
    }
    
    void pop() {
        mainStack.pop();
        minStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();        
    }
};
