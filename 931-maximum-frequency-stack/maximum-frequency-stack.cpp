class FreqStack {
public:
    FreqStack() {
        
    }
    map<int,stack<int>,greater<int>>m;
    unordered_map<int,int>f;
    void push(int val) {
        f[val]++;
        m[f[val]].push(val);
    }
    
    int pop() {
        int ele=m.begin()->second.top();
        m.begin()->second.pop();
        f[ele]--;
        if(m.begin()->second.empty()) m.erase(m.begin()->first);
        return ele;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */