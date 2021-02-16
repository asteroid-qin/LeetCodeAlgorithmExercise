//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：替换所有的问号
//    // 思路：遍历s，特殊处理最左边字符(
//    // 然后遍历s，在左边字符的基础上+1设置即可。
//    // 并尝试获取右边字符，如果右边字符能够获取并且等于刚刚设置好的当前字符。那么
//    // 在当前的基础上再+1
//    string modifyString(string s) {
//        if (s[0] == '?') {
//            s[0] = 'a';
//            if (s.size() != 1 && s[0] == s[1]) {
//                s[0] = ((s[1] - 'a' + 1) % 26) + 'a';
//            }
//        }
//
//        for (int i = 1; i < s.size(); i++) {
//            if (s[i] == '?') {
//                s[i] = ((s[i - 1] - 'a' + 1) % 26) + 'a';
//            }
//            if (i + 1 < s.size() && s[i + 1] == s[i]) {
//                s[i] = ((s[i] - 'a' + 1) % 26) + 'a';
//            }
//        }
//
//        return s;
//    }
//};
//
//int main() {
//	return 0;
//}