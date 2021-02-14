//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个字符串 s，它(仅由字母 'a' 和 'b'!!!) 组成。每一次删除操作都可以从 s 中删除一个回文 子序列。
//    // 思路：理解题意：理清楚子字符串和子序列的区别
//    // 如果一个字符串可以通过删除原字符串某些字符而不改变原字符顺序得到，那么这个字符串就是原字符串的一个子序列
//    // 直接分类讨论：
//    // 如果s为空就返回0，s本身就是回文返回1，否则返回2(比如ab、ba)
//    // 因为：仅有字符a、b构成，所以删除子序列最少次数只有三种可能！
//    int removePalindromeSub(string s) {
//        if (s.size() == 0) {
//            return 0;
//        }
//        for (int i = 0, j = s.size() - 1; i < j; ) {
//            if (s[i++] != s[j--]) {
//                return 2;
//            }
//        }
//
//        return 1;
//    }
//};
//
//int main() {
//	return 0;
//}