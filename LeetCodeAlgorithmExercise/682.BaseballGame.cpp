//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ַ������������ж���������������ַ����ڱ�����ops������֮�͡�
//    // ˼·����������漰ǰ���ε÷֣����Ե�ʹ�ñ�����¼��(��������)
//    // �Ҵ��ˣ�����⿼�ľ���ջ����������ر�ǩ���ֻ����ǣ����һֱC����ôǰ���������ǲ����ܿ�������������ס��
//    // ���������ջ����
//    int calPoints(vector<string>& ops) {
//        int res = 0;
//        stack<int> m_stack;
//
//        for (auto s : ops) {
//            int x;
//            if (s == "+") {
//                int a = m_stack.top();
//                m_stack.pop();
//                x = a + m_stack.top();
//                m_stack.push(a);
//            }
//            else if (s == "D") {
//                x = m_stack.top() * 2;
//            }
//            else if (s == "C") {
//                res -= m_stack.top();
//                m_stack.pop();
//                continue;
//            }
//            else {
//                x = stoi(s);
//            }
//
//            m_stack.push(x);
//            res += x;
//        }
//
//        return res;
//    }
//
//    // Ҳ���԰Ѽ���Ϸֳ���
//    int calPoints(vector<string>& ops) {
//        stack<int> m_stack;
//
//        for (auto s : ops) {
//            if (s == "+") {
//                int a = m_stack.top();
//                m_stack.pop();
//                int b = m_stack.top();
//                m_stack.push(a);
//                m_stack.push(a + b);
//            }
//            else if (s == "D") {
//                m_stack.push(m_stack.top() * 2);
//            }
//            else if (s == "C") {
//                m_stack.pop();
//            }
//            else {
//                m_stack.push(stoi(s));
//            }
//        }
//
//        int res = 0;
//        while (!m_stack.empty()) {
//            res += m_stack.top();
//            m_stack.pop();
//        }
//
//        return res;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<string> ops = { "5","2","C","D","+"};
//    cout << s.calPoints(ops) << endl;
//
//
//	return 0;
//}