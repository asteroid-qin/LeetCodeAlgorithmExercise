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
//        // дһ��ջ�Ļ��������ַ�ʽ������(����),������(ѭ������)
//        // �����������ʵ��������(�������ķ���ֵҲ֪����int���͵�����)
//        // �ü�..
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
//// ��Ͳ��ò����ˣ���дһ�������Լ���ջ����
//int main() {
//
//	return 0;
//}