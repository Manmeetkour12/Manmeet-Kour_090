
class MyStack {
public:
    queue<int>s;
    MyStack() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        queue<int>s1;
        int n = s.size()-1; 
        for(int i =0; i<n; i++) {
            s1.push(s.front());
            s.pop();
        }
        int x = s.back();
        s.pop();
        s.swap(s1);
        return x;   
    }
    
    int top() {
        return s.back();   
    }
    
    bool empty() {
        return s.empty();  
    }
};
