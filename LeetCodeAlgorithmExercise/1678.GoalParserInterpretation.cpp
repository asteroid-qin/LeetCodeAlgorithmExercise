//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：按照指定规则进行字符串拼接..
//    // 思路：遍历一遍即可。三个if判断
//    string interpret(string command) {
//        string res;
//
//        for (int i = 0; i < command.size(); i++) {
//            if (command[i] == 'G') {
//                res.push_back('G');
//                continue;
//            }
//
//            if (command[i + 1] == ')') {
//                res.push_back('o');
//                i++;
//            }
//            else {
//                res.append("al");
//                i += 3;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}