#define kaju pair<int,int>
class MinStack {
public:
    vector<kaju> stackoko;
    MinStack() {
        
    }
    
    void push(int val) {
        if (stackoko.empty())
            stackoko.push_back({val, val});
        else {
            int local_min = min(val, this->getMin());
            stackoko.push_back({val, local_min});
        }
    }
    
    void pop() {
        stackoko.pop_back();
    }
    
    int top() {
        return stackoko.back().first;
    }
    
    int getMin() {
       return stackoko.back().second; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */