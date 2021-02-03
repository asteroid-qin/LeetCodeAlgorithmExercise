//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定一个正整数 n，找到并返回 n 的二进制表示中两个 相邻 1 之间的 最长距离 
//    // 。如果不存在两个相邻的 1，返回 0 （注意！相邻指的是有0或者没有0把1隔开）
//    // 思路：从低位往高位遍历，记录上次1的位置，如果遇到当前位置是1，那么
//    // 求max，然后更新上一次1的位置
//    int binaryGap(int n) {
//        int res = 0, pre = -1;
//        for (int i = 0; n != 0; i++, n >>= 1) {
//            if (n & 1) {
//                if (pre != -1) {
//                    res = max(res, i - pre);
//                }
//
//                pre = i;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}
