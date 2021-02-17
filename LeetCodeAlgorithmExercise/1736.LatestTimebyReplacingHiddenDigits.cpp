//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：写几个逻辑判断出最大时间
//    // 思路：先判断下标0为止为？，是的话需要分类讨论：
//    // 如果下标1为止也为？的话，那么直接设置下标0和下标1为24
//    // 否则判断下标1的值是否小于等于4，是下标0就是2，不是就1
//    // 以此类推...
//    string maximumTime(string time) {
//        if (time[0] == '?') {
//            time[0] = (time[1] == '?' || time[1] < '4') ? '2' : '1';
//        }
//        if (time[1] == '?') {
//            time[1] = time[0] > '1' ? '3' : '9';
//        }
//        if (time[3] == '?') {
//            time[3] = '5';
//        }
//        if (time[4] == '?') {
//            time[4] = '9';
//        }
//
//        return time;
//    }
//};
//
//int main() {
//	return 0;
//}