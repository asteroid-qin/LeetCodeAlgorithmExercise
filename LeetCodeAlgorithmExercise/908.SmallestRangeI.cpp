//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 A，请你给数组中的每个元素 A[i] 都加上一个任意数字 x （-K <= x <= K），从而得到一个新数组 B 。
//    // 返回数组 B 的最大值和最小值之间可能存在的最小差值。
//    // 思路：先遍历一次得到最大值和最小值，然后计算最大值和最小值的差值，如果这个差值时小于等于K的，那么返回0
//    // 不然返回这个差值-2K（这个结论时怎么来的？根据题意，差值可以被K缩小，最大值-K，最小值+K，最多缩短2K距离。
//    // 2K以内自然最小差值为0，以外就是差值减去能够缩短的最大距离
//    int smallestRangeI(vector<int>& A, int K) {
//        int maxNum = INT_MIN, minNum = INT_MAX;
//
//        for (int& i : A) {
//            maxNum = max(maxNum, i);
//            minNum = min(minNum, i);
//        }
//
//        return max(maxNum - minNum - 2 * K, 0);
//    }
//};
//
//int main() {
//	return 0;
//}