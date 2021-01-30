//#include<iostream>
//#include<stack>
//#include<map>
//#include<string>
//using namespace std;
//
//
//
//class Solution {
//private:
//    // 准备一个map
//    map<char, char> m;
//
//public:
//    // 构造器，初始化map
//    Solution() {
//        this->m[')'] = '(';
//        this->m[']'] = '[';
//        this->m['}'] = '{';
//    }
//    // 完美结束！！真是一波三折
//    bool isValid(string s) {
//        // 拿到字符串的长度
//        int length = s.size();
//        // 判断当前字符串的长度是否是2的倍数
//        if (length % 2 != 0) {
//            // 如果不是，则不可能是有效的括号
//            return false;
//        }
//        // 初始化一个栈
//        stack<char> brackets;
//        
//        // for循环遍历整个字符串
//        for (int i = 0; i < length; i++) {
//            // 拿到当前遍历的字符
//            char c = s.at(i);
//
//            // 去map里面查
//            map<char, char>::iterator mit = this->m.find(c);
//
//            // 如果查到了，那就代表是右括号
//            if (mit != m.end()) {
//                char top = '#';
//
//                // 从栈顶取出元素（一定要注意处理栈为空的情况）
//                if (!brackets.empty()) {
//                    // 因为c++中pop不返回弹出的值，所以必须使用top接受
//                    top = brackets.top();
//                    // 拿到值后，再弹出
//                    brackets.pop();
//                }
//
//                // 打印
//                cout << "************" << endl;
//                cout << "当前的top:" << top << "当前的遍历元素：" << mit->second << endl << endl;
//
//                // 判断栈顶元素是否和当前元素匹配
//                // 如果不匹配，那么这个肯定不是有效括号
//                if (top != mit->second) {
//                    return false;
//                }
//            }
//            else {
//                // 不然就是左括号，需要放入栈中
//                brackets.push(c);
//            }
//        }
//
//        // for循环结束后判断栈的大小是否为0，如果是，那么代表都被消除了，是有效括号
//        return brackets.empty();
//    }
//};
//
//
//// 判断是否是有效括号
//int main() {
//    string str = "()[]{}";
//
//    Solution s;
//    bool flag = s.isValid(str);
//    cout << "传入一个字符串括号后，结果为：" << flag << "  ->";
//
//    if (flag) {
//        cout << "有效" << endl;
//    }
//    else {
//        cout << "无效" << endl;
//    }
//
//
//	return 0;
//}