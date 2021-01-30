//#include<iostream>
//#include<deque>
//using namespace std;
//
//// 根据题意，很明显，目标：使用队列实现栈
//// 简简单单一次过..
//class MyStack {
//public:
//    // 初始化一个队列
//    deque<int> d;
//
//    /** Initialize your data structure here. */
//    MyStack() {
//        
//    }
//
//    /** Push element x onto stack. */
//    void push(int x) {
//        d.push_back(x);
//    }
//
//    /** Removes the element on top of the stack and returns that element. */
//    int pop() {
//        // 注意有两步：拿到栈顶元素，弹出栈顶元素       
//        int r = d.back();
//        d.pop_back();
//
//        // 最后返回
//        return r;
//    }
//
//    /** Get the top element. */
//    int top() {
//        return d.back();
//    }
//
//    /** Returns whether the stack is empty. */
//    bool empty() {
//        return d.empty();
//    }
//};
//
///**
// * Your MyStack object will be instantiated and called as such:
// * MyStack* obj = new MyStack();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->top();
// * bool param_4 = obj->empty();
// */
//
//int main() {
//	return 0;
//}