//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//
//    // 目标：计算从L到R，有多少个质数个计算置位。依旧很简单
//    // 思路：一个while循环从L遍历到R，再写一个while得到当前L的计算置位，如果计算置位和等于质数那就count++
//    // 注意！！计算置位指的是转换成二进制1的个数，这里L又大于0，所以不管L多大，结果还是在32以内
//    // 。最后返回count即可
//    int countPrimeSetBits(int L, int R) {
//        int res = 0, n, count;
//
//        while (L <= R) {
//            n = L;
//            count = 0;
//
//            while (n) {
//                count++;
//                n &= n - 1;
//            }
//
//            if (judge(count)) {
//                res++;
//            }
//
//            L++;
//        }
//
//        return res;
//    }
//
//    bool judge(int n) {
//        switch (n) {
//        case 2:
//        case 3:
//        case 5:
//        case 7:
//        case 11:
//        case 13:
//        case 17:
//        case 19:
//        case 23:
//        case 29:
//        case 31:
//            return true;
//        default:
//            return false;
//        }
//    }
//};
//
//int main() {
//	return 0;
//}