//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个日期，请你设计一个算法来判断它是对应一周中的哪一天。
//    // 思路：通过日期计算天数，对天数%7并返回（通过数组返回）
//    // 根据1971 <=year<= 2100,可以提前算出1971前所有天数之和
//	  // 居然还有专门算法...
//    string dayOfTheWeek(int day, int month, int year) {
//        string res[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
//        int arr[11] = { 31,28,31,30,31,30,31,31,30,31,30 };
//        int num = 719527;
//
//        for (int i = 1971; i < year; i++) {
//            num += 365;
//            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
//                num++;
//            }
//        }
//
//        for (int i = 0; i < month - 1; i++) {
//            num += arr[i];
//        }
//        if ((month > 2) && (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
//            num++;
//        }
//
//        num += day;
//
//        return res[num % 7];
//    }
//};
//
//int main() {
//	return 0;
//}