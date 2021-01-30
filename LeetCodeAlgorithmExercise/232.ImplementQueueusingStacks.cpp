//#include<iostream>
//#include<stack>
//using namespace std;
//
//// 看名字就知道用栈实现队列
//class MyQueue {
//public:
//    // 初始化一个栈
//    stack<int> myStack;
//
//    /** Initialize your data structure here. */
//    MyQueue() {
//
//    }
//
//    /** Push element x to the back of queue. */
//    void push(int x) {
//        myStack.push(x);
//    }
//
//    /** Removes the element from in front of queue and returns that element. */
//    int pop() {
//        // 关键的问题来了
//        // 栈是先进后出，队列是先进先出
//        // 因为这里要求使用栈，所以思路：
//        // 放就正常放，需要弹出的时候，创建一个临时的栈，把元素转移到临时的栈中
//        // 再弹出栈顶元素，最后再把临时的栈还原成原本的栈
//        // 思路绝对没有任何问题，但是这样似乎太消耗资源了
//        // 元素越多，弹出的效率越低...(看了一下官方，好像也只能这么做...)
//
//        // 临时栈
//        stack<int> s;
//        while (!myStack.empty()) {
//            s.push(myStack.top());
//            myStack.pop();
//        }
//
//        // 取出第一个元素
//        int r = s.top();
//        s.pop();
//
//        // 更新原来的栈
//        while (!s.empty()) {
//            myStack.push(s.top());
//            s.pop();
//        }
//
//        return r;
//    }
//
//    /** Get the front element. */
//    int peek() {
//        // 方法同上
//
//        // 临时栈
//        stack<int> s;
//        while (!myStack.empty()) {
//            s.push(myStack.top());
//            myStack.pop();
//        }
//
//        // 取出第一个元素
//        int r = s.top();
//        // 注意这里不用弹出！！
//
//        // 更新原来的栈
//        while (!s.empty()) {
//            myStack.push(s.top());
//            s.pop();
//        }
//
//        return r;
//    }
//
//    /** Returns whether the queue is empty. */
//    bool empty() {
//        return myStack.empty();
//    }
//};
//
///**
// * Your MyQueue object will be instantiated and called as such:
// * MyQueue* obj = new MyQueue();
// * obj->push(x);
// * int param_2 = obj->pop();
// * int param_3 = obj->peek();
// * bool param_4 = obj->empty();
// */
//
//int main() {
//	return 0;
//}