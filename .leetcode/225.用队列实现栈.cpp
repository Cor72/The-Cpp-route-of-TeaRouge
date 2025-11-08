/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
public:
queue<int> que1;
queue<int> que2;
MyStack() {
        
    }
    
    void push(int x) {
        que1.push(x);
    }
    
    int pop() {
        while(que1.size()>1)
        {
            que2.push(que1.front());
            que1.pop();
        }
        int tem=que1.front();
        que1.pop();
        while (!que2.empty())
        {
            que1.push(que2.front());
            /* code */
            que2.pop();
        }
        return tem;
    }
    
    int top() {
        return que1.back();
    }
    
    bool empty() {
        return que1.empty()&&que2.empty();
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
// @lc code=end

