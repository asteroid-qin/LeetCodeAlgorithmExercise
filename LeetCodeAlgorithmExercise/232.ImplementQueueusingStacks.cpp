//#include<iostream>
//#include<stack>
//using namespace std;
//
//// �����־�֪����ջʵ�ֶ���
//class MyQueue {
//public:
//    // ��ʼ��һ��ջ
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
//        // �ؼ�����������
//        // ջ���Ƚ�������������Ƚ��ȳ�
//        // ��Ϊ����Ҫ��ʹ��ջ������˼·��
//        // �ž������ţ���Ҫ������ʱ�򣬴���һ����ʱ��ջ����Ԫ��ת�Ƶ���ʱ��ջ��
//        // �ٵ���ջ��Ԫ�أ�����ٰ���ʱ��ջ��ԭ��ԭ����ջ
//        // ˼·����û���κ����⣬���������ƺ�̫������Դ��
//        // Ԫ��Խ�࣬������Ч��Խ��...(����һ�¹ٷ�������Ҳֻ����ô��...)
//
//        // ��ʱջ
//        stack<int> s;
//        while (!myStack.empty()) {
//            s.push(myStack.top());
//            myStack.pop();
//        }
//
//        // ȡ����һ��Ԫ��
//        int r = s.top();
//        s.pop();
//
//        // ����ԭ����ջ
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
//        // ����ͬ��
//
//        // ��ʱջ
//        stack<int> s;
//        while (!myStack.empty()) {
//            s.push(myStack.top());
//            myStack.pop();
//        }
//
//        // ȡ����һ��Ԫ��
//        int r = s.top();
//        // ע�����ﲻ�õ�������
//
//        // ����ԭ����ջ
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