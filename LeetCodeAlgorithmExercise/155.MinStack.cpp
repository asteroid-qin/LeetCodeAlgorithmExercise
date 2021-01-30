//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MinStack {
//public:
//    stack<int> x_stack;
//    stack<int> min_stack;
//
//    /** initialize your data structure here. */
//    MinStack() {
//        // 写一个栈的话，有两种方式，线性(数组),非线性(循环链表)
//        // 这里就用数组实现啦！！(看方法的返回值也知道是int类型的数组)
//        // 好简单..
//        min_stack.push(INT_MAX);
//    }
//
//    void push(int x) {
//        x_stack.push(x);
//        min_stack.push(min(min_stack.top(), x));
//    }
//
//    void pop() {
//        x_stack.pop();
//        min_stack.pop();
//    }
//
//    int top() {
//        return x_stack.top();
//    }
//
//    int getMin() {
//        return min_stack.top();
//    }
//};
//
//// 这就不用测试了，就写一个属于自己的栈而已
//int main() {
//
//	return 0;
//}