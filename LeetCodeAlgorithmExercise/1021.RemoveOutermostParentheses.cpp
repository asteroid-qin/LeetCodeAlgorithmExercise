//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：消除最外层括号
//    // 思路：用一个变量count记录当前括号的对数。遇到（就++，遇到)就--
//    // 在这个基础上进行分类讨论：
//    // 如果当前是（，那么count只要不等于0，那么这个括号就内层的需要拼接，然后count++
//    // 如果当前是），那么先count--，弹出一个括号，在这之后，如果count不等于0，那么这个）就不是最外层的，可以拼接
//    // 按照上面的思路，遍历一遍S，拼接字符串，最后返回结果即可
//    string removeOuterParentheses(string S) {
//        string res;
//
//        int count = 0;
//        for (auto& c : S) {
//            if (c == '(') {
//                if (count++) {
//                    res += c;
//                }
//            }
//            else {
//                if (--count) {
//                    res += c;
//                }
//            }
//        }
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}