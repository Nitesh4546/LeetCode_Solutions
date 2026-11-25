class MinStack {
    stack<pair<int, int>> rec;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(rec.empty()) {
            rec.push({value, value});
        }else {
            rec.push({value, min(value, rec.top().second)});
        }
    }
    
    void pop() {
        rec.pop();
    }
    
    int top() {
        return rec.top().first;
    }
    
    int getMin() {
        return rec.top().second;        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */