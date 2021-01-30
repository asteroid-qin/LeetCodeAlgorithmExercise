//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：检查一个数是能否等于除自己以外的因子之和
//    // 思路：用一个变量接收因子，大于就返回false即可。最后判断结果是否等于num
//    // 直接使用枚举了.方法二的欧几里得-欧拉定理就离谱..直接面向测试案例编程
//    bool checkPerfectNumber(int num) {
//        // 需要处理特殊情况1
//        if (num == 1) {
//            return false;
//        }
//        // 注意条件说：除自己以外的因子和。并且num是大于等于1的
//        int sum = -num;
//
//        // for循环，得到num的因子
//        for (int i = 1; i <= sqrt(num); i++) {
//            if (num % i != 0) continue;
//            // 把因子加入到sum中
//            sum += i + num / i;
//            // 判断sum的值
//            if (sum > num) {
//                return false;
//            }
//        }
//
//        // 最后判断sum是否等于num
//        return sum == num;
//    }
//};
//
//int main() {
//	return 0;
//}