//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    // 虽然还是很难理解，但是必须得过
//    // 使用动态规划求解一个容器最大连续和问题（感觉钻牛角尖了）
//    // 第一个Math会每次拿到最优解，即从左往右遍历后，每一项都会之前大
//    // 第二个Math则负责结果变化过程中的最大值，最后把它返回
//    int maxSubArray(vector<int>& nums) {
//        int sum = nums[0], result = nums[0];
//
//        if (nums.size() == 1)
//            return result;
//
//        for (int i = 1; i <= nums.size() - 1; i++)
//        {
//            // 保证每次得到的都是最大值
//            sum = max(nums[i], sum + nums[i]);
//            result = max(sum, result);
//        }
//        return result;
//    }
//};
//
//// 不需要测试了，直接在LeetCode编译器写完了
//int main() {
//
//
//    return 0;
//}