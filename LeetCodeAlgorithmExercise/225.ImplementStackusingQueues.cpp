//#include<iostream>
//#include<deque>
//using namespace std;
//
//// �������⣬�����ԣ�Ŀ�꣺ʹ�ö���ʵ��ջ
//// ��򵥵�һ�ι�..
//class MyStack {
//public:
//    // ��ʼ��һ������
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
//        // ע�����������õ�ջ��Ԫ�أ�����ջ��Ԫ��       
//        int r = d.back();
//        d.pop_back();
//
//        // ��󷵻�
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