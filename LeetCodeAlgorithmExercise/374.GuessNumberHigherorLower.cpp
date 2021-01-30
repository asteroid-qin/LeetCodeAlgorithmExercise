//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：猜一个数，使用二分法,1 <= n <= 231 - 1
//    // 这种题目已经对我来说，毫无压力了..
//    int guessNumber(int n) {
//        int left = 1, right = n, mid;
//
//        while (left <= right) {
//            // 需要考虑n的取值返回，当心整数溢出！！
//            mid = left + (right - left) / 2;
//
//            if (guess(mid) == 0) {
//                // 猜中
//                return mid;
//            }
//            else if (guess(mid) == 1) {
//                // 小了，需要右移
//                left = mid + 1;
//            }
//            else {
//                // 大了，需要左移
//                right = mid - 1;
//            }
//
//        }
//
//        // 给一个默认值
//        return -1;
//    }
//
//    /**
//     * Forward declaration of guess API.
//     * @param  num   your guess
//     * @return 	     -1 if num is lower than the guess number
//     *			      1 if num is higher than the guess number
//     *               otherwise return 0
//     * int guess(int num);
//     */
//
//    int guess(int num);
//};
//
//int main() {
//	return 0;
//}