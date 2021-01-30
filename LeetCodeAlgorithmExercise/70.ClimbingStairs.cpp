//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 爬楼梯？一次只能爬1或2步，求多少种组合
//    // 思路：见官方解释：f(x)=f(x−1)+f(x−2),
//    // 它意味着爬到第 xx 级台阶的方案数是爬到第 x - 1x−1 级台阶的方案数和爬到第 x - 2x−2 级台阶的方案数的和
//    // 只要得出这个方程，那这个问题可以说已经解决了大部分
//	  // 这里使用动态规划（要睡了，这里就不详细解释了），总之就是求斐波那契数列
//    int climbStairs(int n) {
//        // 去掉n=1或者n=2的情况
//        if (n == 1) {
//            return 1;
//        }
//        else if (n == 2) {
//            return 2;
//        }
//
//        // 用变量记录方案数
//        int r = 3;
//
//        // 用两个变量记录上两个数
//        // head指的是f(n-2) next指的是f(n-1)
//        int head = 1, next = 2;
//
//        for (int i = 3; i <= n; i++) {
//            // 两个数往后各移一位
//            head = next;
//            next = r;
//
//            // 每次循环都能计算出结果
//            r = head + next;
//        }
//
//        return r;
//    }
//};
//
//
//// 用于测试,这里就不测试了。。
//int main() {
//
//
//
//	return 0;
//}