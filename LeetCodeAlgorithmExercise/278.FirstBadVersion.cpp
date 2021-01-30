//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：输入一个数，找到一个正确版本后的错误版本
//    // 思路，直接从头开始遍历，如果当前是错误版本就直接返回这个数(但是这样是不行的，题目也说了应该尽量减少api的调用！)
//    // 所以可以使用2分法来减少api的调用！
//    // 每次从中间开始找
//    // 如果当前是错误的，就前往左边
//    // 如果当前是正确的，就前往右边+1
//    int firstBadVersion(int n) {
//        // 准备两个变量
//        int left = 1, right = n;
//
//        while (left < right) {
//            // 因为存在溢出的风险，所以得这样写！！
//            int mid = left + (right - left) / 2;
//            if (isBadVersion(mid)) {
//                // 如果当前是糟糕版本就往左移
//                right = mid;
//            }
//            else {
//                // 否则往右移
//                left = mid + 1;
//            }
//        }
//
//        return left;
//    }
//
//    bool isBadVersion(int version);
//};
//
//int main() {
//	return 0;
//}