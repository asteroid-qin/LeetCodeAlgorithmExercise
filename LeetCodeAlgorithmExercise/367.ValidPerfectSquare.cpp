//#include<iostream>
//#include<vector>
//#include<unordered_set>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：不调用库，判断num是否是完全平方数
//    // 思路：从1开始遍历这个值，如果当前值乘以当前值等于nun，那就代表是完全平方数
//    // 然而上面这种只是普普通通的暴力法，这道题使用2分法会更快
//    // 思路：双指针while循环，判断中间值的平方和num之间的关系，如果大就左移，如果小就右移，等于就退出，默认返回false
//	  // 还有一种牛顿法，真的太妙了，比二分法写起来更加简单，时间复杂度相同。关键是公式的推导，这里就不写了
//    bool isPerfectSquare(int num) {
//        // 这里需要排除特殊情况的1
//        if (num == 1)
//            return true;
//
//        // 因为一个数的根号肯定是小于等于当前数/2的，所以可以优化判断条件
//        for (int i = 1; i <= num / 2 && i < 46341; i++) {
//            // 还有一个坑，那就是溢出！！需要在判断条件上加上
//
//            if (i * i == num) {
//                // 只要存在一个数是，那就可以判断这个数是一个完全平方数
//                return true;
//            }
//        }
//
//        return false;
//    }
//
//    // 这个使用二分法
//    bool isPerfectSquarePlus(int num) {
//        // 排除特殊情况
//        if (num == 1) {
//            return true;
//        }
//
//        // 这里j可以优化成num / 2
//        int i = 1, j = num / 2;
//        // 小心中位数溢出
//        long mid;
//
//        // 因为可能在左边，也可能在右边，所以结果可以判断是否等于
//        while (i <= j) {
//            mid = (i + j) / 2;
//
//            if (mid * mid == num) {
//                return true;
//            }
//            else if (mid * mid > num) {
//                // 需要左移,因为平方都大于num，所以可以减去1
//                j = mid - 1;
//            }
//            else {
//                // 右移,因为平方都小于num，所以可以加上1
//                i = mid + 1;
//            }     
//        }
//
//        return false;
//    }
//};
//
//int main() {
//    long long i = 46341;
//    // 注意！！！变量相乘的结果受变量类型影响！！
//    cout << i * i << endl;
//
//	return 0;
//}