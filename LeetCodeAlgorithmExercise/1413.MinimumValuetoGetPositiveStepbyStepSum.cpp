//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：可以选择任意正数作为初始值并从左到右遍历，用nums累加每次的值，要求每次累加和至少大于等于1
//    // 求这个最小正数的值
//    // 思路：要求每次累加和都至少大于等于1，也就是得求出每次累加和的最小值。只要加上这个最小值大于等于1即可
//    // 所以只要遍历nums，得到累加过程中的最小值。
//    // 如果这个最小值大于等于0，那么返回最小正数1
//    // 如果这个最小值小于0，那么返回1 - 最小值
//    int minStartValue(vector<int>& nums) {
//        int minSum = INT_MAX, sum = 0;
//        for (auto& i : nums) {
//            sum += i;
//            minSum = min(minSum, sum);
//        }
//
//        if (minSum < 0) {
//            return 1 - minSum;
//        }
//
//        return 1;
//    }
//};
//
//int main() {
//	return 0;
//}