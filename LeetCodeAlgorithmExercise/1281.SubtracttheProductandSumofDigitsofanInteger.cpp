//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数 n，请你帮忙计算并返回该整数「各位数字之积」与「各位数字之和」的差。
//    // 思路：如果没有什么数学公式的话，那只能遍历计算积和和，然后返回差
//    int subtractProductAndSum(int n) {
//        int pro = 1, sum = 0;// 注意！1 <= n <= 10^5，所以不需要特殊处理0
//
//        while (n) {
//            int bit = n % 10;
//            pro *= bit;
//            sum += bit;
//
//            n /= 10;
//        }
//
//        return pro - sum;
//    }
//};
//
//int main() {
//	return 0;
//}