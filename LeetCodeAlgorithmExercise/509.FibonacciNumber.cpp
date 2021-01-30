//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求斐波那契数列..
//    // 思路：直接动态规划+滑动数组即可。下一题！！
//    // 官方解第二和第三可以了解，使用数学直接算才是最爽的
//    int fib(int n) {
//        if (n == 0 || n == 1) {
//            return n;
//        }
//
//        int res = 1;
//        for (int i = 2, q = 0, p = 1; i < n; i++) {
//            q = p;
//            p = res;
//            res = q + p;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}