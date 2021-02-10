//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回第 N 个泰波那契数
//    // T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn+3 = Tn + Tn+1 + Tn+2
//    // 思路：动态规划+滑动数组
//    int tribonacci(int n) {
//        if (n == 0 || n == 1 || n == 2) {
//            return n == 2 ? 1 : n;
//        }
//
//        int n3 = 0, n2 = 1, n1 = 1, res = n1 + n2 + n3;
//
//
//        while (n > 3) {
//            n3 = n2;
//            n2 = n1;
//            n1 = res;
//            res = n1 + n2 + n3;
//            n--;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}