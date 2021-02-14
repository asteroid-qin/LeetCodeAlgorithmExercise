//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：将整数转换为两个无零整数的和
//    // 思路：直接枚举
//    // 或者尝试拆分每一位。只要去每一位的值并且注意n < div即可
//    vector<int> getNoZeroIntegers(int n) {
//        int m = 0;
//
//        for (int i = 0; ;i++) {
//            int div = pow(10, i);
//            m += div;
//            n -= div;
//
//            if (n < div) {
//                break;
//            }
//
//            if (n / div % 10 == 0) {
//                m += div;
//                n -= div;
//            }
//
//            if (n < div * 10) {
//                break;
//            }
//        }
//
//        return { m, n };
//    }
//};
//
//int main() {
//	return 0;
//}