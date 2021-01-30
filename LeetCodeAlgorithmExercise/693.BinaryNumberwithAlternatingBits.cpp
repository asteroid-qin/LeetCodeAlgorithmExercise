//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个正整数，是否1和0交替出现
//    // 思路：用一个变量来记录上一位的值，如果当前位和上一位不相等就return false
//    bool hasAlternatingBits(int n) {
//        bool flag = (n & 1)?0:1, m;
//        while (n) {
//            m = n & 1;
//            if (flag == m) {
//                return false;
//            }
//
//            n >>= 1;
//            flag = m;
//        }
//
//        return true;
//    }
//    
//    bool hasAlternatingBits(int n) { // 101 010 111
//        int m = (n ^ (n >> 1));
//
//        return (m & n) == 0;
//    }
//};
//
//int mian() {
//	return 0;
//}