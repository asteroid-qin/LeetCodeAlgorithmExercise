//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标： 判断输入的数是否是2的幂次方
//    bool isPowerOfTwo(int n) {
//        // 被坑了...注意题目中n的范围，可以取到0或负数
//        if (n <= 0) {
//            return false;
//        }
//
//        // 直接一个while循环,判断能否被2整除
//        while (n % 2 == 0) {
//            n /= 2;
//        }
//
//        // 如果一直整除2，结果肯定为1
//        return n == 1;
//    }
//};
//
//int main() {
//	return 0;
//}