//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定一个长度为 n 的 非空 整数数组
//    // ，每次操作将会使 n - 1 个元素增加 1。找出让数组所有元素相等的最小操作次数。
//    // 思路：每次给n-1个元素+1，这n-1个元素肯定不应该除开最大值，而除了最大值以外其他元素都+1
//    // 其实就是相对于最大值-1
//    // 如此看来，123->122->112->111，最终三步搞定。所以只需要想办法找出最小值
//    // 然后算出每个数减去最小值的和即可
//    // 这道题如果没意识到：
//    // 除最大数外n-1个元素+1 等同于 最大数-1
//    // 那么这道题会显得异常艰巨
//    int minMoves(vector<int>& nums) {
//        int minN = nums[0];
//        for (auto i : nums) {
//            minN = min(i, minN);
//        }
//
//        int sum = 0;
//        // 再一轮遍历，把每个数减去最小值的和加起来
//        for (auto i : nums) {
//            sum += i - minN;
//        }
//
//        return sum;
//    }
//};
//
//int main() {
//	return 0;
//}