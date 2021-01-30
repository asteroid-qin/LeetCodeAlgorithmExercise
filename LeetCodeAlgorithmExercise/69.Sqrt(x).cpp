//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 这题感觉还不错，只需要for循环从左往右比较就行
//    // 感觉状态不是特别好，这么简单的一道题居然还错了三次，哎
//    // 这是一种非常笨的方法，从0开始遍历，遇到较大的数遍历起来及其慢
//    // 个人感觉可以使用二分法，快速定位
//    // 二分法花了4ms...一开始还以为又炸了...最快0ms！！
//    int mySqrt(int x) {
//        // 首先去除掉x等于0或1的情况
//        if (x == 0 || x == 1)
//            return x;
//
//        int left = 0;
//        int right = x;
//        long mid = 0;
//
//        while (left + 1 <= right) {
//            // 计算得到中值
//            mid = (left + right) / 2;
//
//            // 首先如果要大
//            if ((mid + 1) * (mid + 1) > x && mid * mid <= x)
//                return (int)mid;
//            else if (mid * mid < x)
//                left = mid;
//            else
//                right = mid;
//        }
//    }
//};
//
//// 由于这道题用二分法直接在leetcode自带的编译器上搞定了，所以就不测试了
//int main() {
//
//	return 0;
//}