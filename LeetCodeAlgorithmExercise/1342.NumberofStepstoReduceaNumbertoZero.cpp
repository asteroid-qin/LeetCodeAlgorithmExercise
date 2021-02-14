//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个非负整数 num ，请你返回将它变成 0 所需要的步数。
//    // 如果当前数字是偶数，你需要把它除以 2 ；否则，减去 1 。
//    // 这太简单了..一个大while循环就足够了..
//    // 思路：用count记录轮数，每轮条件是num不为0
//    // 在循环里先判断当前数是否是偶数，如果是就/2
//    // 否则就-1.直到num==0退出
//    int numberOfSteps(int num) {
//        int count = 0;
//
//        while (num) {
//            if (num % 2 == 0) {
//                num /= 2;
//            }
//            else {
//                num--;
//            }
//
//            count++;
//        }
//        
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}