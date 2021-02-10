//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断typed是否在name的基础上，有些字符后面多出重复的字符
//    // 思路：（因为要考虑字符的顺序，所以不应该使用map）这里使用双指针，一个指向i，一个指向j。
//    // 循环i，计算当前重复的数，再循环j（注意！得和i指向同一个字符）计算当前重复的数，如果j重复的数小于i，就false
//    // 默认true
//    bool isLongPressedName(string name, string typed) {
//        int i = 0, j = 0, m = name.size(), n = typed.size();
//
//        while( i < m && j < n) {
//            int count = 0;
//            char c = name[i];
//
//            for (; i < m && name[i] == c; ++i, ++count);
//            for (; j < n && typed[j] == c; ++j, --count);
//
//            if (count > 0) {
//                return false;
//            }
//        }
//
//        return (i == m) && (j == n);
//    }
//};
//
//int main() {
//	return 0;
//}