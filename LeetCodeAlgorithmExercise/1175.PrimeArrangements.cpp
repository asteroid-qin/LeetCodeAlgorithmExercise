//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算1到n的全排列，要求n为质数时，需要放在质数索引位置上（索引位置从1开始）
//    // 思路：先从1遍历到n，得到有多少个质数。而根据题意质数只能放在质数索引上，所以结果应该是
//    // 非质数的全排列+质数的全排列（别忘记%10^9 + 7）
//    // 超级大坑，100的全排列的值巨大务必，需要在计算全排列的同时，对值进行取模
//    int numPrimeArrangements(int n) {
//        if (n == 1) { // 特殊情况！！
//            return 1;
//        }
//        int count = 0; // count 就是质数的数量
//        for (int i = 1; i <= n; i++) {
//            if (!judge(i)) {
//                count++;
//            }
//        }
//
//        int num = pow(10, 9) + 7;
//
//        return (getNum(count, num) * getNum(n - count, num)) % num;
//    }
//
//
//    bool judge(int n) {
//        if (n == 1) {
//            return true;
//        }
//
//        for (int i = 2; i <= sqrt(n); i++) {
//            if (n % i == 0) {
//                return true;
//            }
//        }
//
//        return false;
//    }
//
//
//    long getNum(int n, int& num) {
//        if (n == 1) {
//            return 1;
//        }
//
//        return (n % num * getNum(n - 1, num)) % num;
//    }
//};
//
//int main() {
//	return 0;
//}