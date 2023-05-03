class MinStack {
public:
    vector<int> stack;
    int m = INT_MAX;
    MinStack() {
        
    }
    void push(int val) {
        stack.push_back(val);
        m = min(val,m);
    }
    
    void pop() {
        stack.pop_back();
        m = INT_MAX;
        for(auto i:stack) m = min(i,m);
    }
    
    int top() {
        return stack[stack.size()-1];
    }
    
    int getMin() {
        return m;
    }
};
