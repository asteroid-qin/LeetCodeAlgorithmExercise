//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：字符串中有数字有对数字特殊操作的字符。在遍历完ops后，数字之和。
//    // 思路：操作最多涉及前两次得分，所以得使用变量记录。(滑动数组)
//    // 我错了，这道题考的就是栈！！（看相关标签发现还真是）如果一直C，那么前面两条数是不可能靠两个变量来记住的
//    // 必须得依靠栈！！
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
//    // 也可以把计算合分出来
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