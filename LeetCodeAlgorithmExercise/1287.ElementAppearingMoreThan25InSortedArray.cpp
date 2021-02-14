//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个非递减的 有序 整数数组，已知这个数组中恰好有一个整数，它的出现次数超过数组元素总数的 25%。
//    // 请你找到并返回这个整数
//    // 思路：首先arr是有序的，所以可以两个比较遍历
//    // 默认数量从1开始，当前和后一个相等就++，不等就重新置位1
//    // 算出元素总和的25%，只要数量大于就直接return，默认返回第一个元素（1 <= arr.length <= 10^4）
//    int findSpecialInteger(vector<int>& arr) {
//        int count = 1, maxNum = arr.size() / 4;
//
//        for (int i = 0; i < arr.size() - 1; i++) {
//            if (arr[i] == arr[i + 1]) {
//                count++;
//            }
//            else {
//                count = 1;
//            }
//
//            if (count > maxNum) {
//                return arr[i];
//            }
//        }
//
//        return arr[0];
//    }
//};
//
//int main() {
//	return 0;
//}