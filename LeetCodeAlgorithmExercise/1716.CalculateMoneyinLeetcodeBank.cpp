//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：根据问题描述找规律
//    // 思路：计算天数day和周数week（n/7，除去这一周）
//    // 先计算能够取整的每周的天数：28 * week + (7 * week - 7) * week / 2
//    // 再计算最后一周：首项：week + 1，尾项：week + day，数量：day。利用求和公式可以轻松解决
//    int totalMoney(int n) {
//        //week: 1  28
//        //      2  28+7
//        //      3  28+7+7     
//        //      4  28+7+7 
//        int day = n % 7, week = n / 7;
//
//        return 28 * week + (7 * week - 7) * week / 2 + (week + 1 + week + day) * day / 2;
//    }
//};
//
//int main() {
//	return 0;
//}