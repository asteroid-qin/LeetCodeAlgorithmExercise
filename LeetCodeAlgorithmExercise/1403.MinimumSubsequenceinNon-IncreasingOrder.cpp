//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求非递增顺序的最小子序列
//    // 思路：根据题意：对nums排序后，对nums求和，
//    // 然后从后面往前遍历，把当前值加入vector中后，判断是否大于sum-当前值，是就直接return
//    // 否则继续下一轮循环（根据：1 <= nums[i] <= 100，也可以使用计数排序）
//    vector<int> minSubsequence(vector<int>& nums) {
//        int sum  = accumulate(nums.begin(), nums.end(), 0);
//        sort(nums.begin(), nums.end());
//
//        vector<int> res;
//
//        for (int i = nums.size() - 1, num = 0; i >= 0; i--) {
//            num += nums[i];
//            res.push_back(nums[i]);
//            if (num > sum - num) {
//                return res;
//            }
//        }
//
//        return {};
//    }
//};
//
//int main() {
//	return 0;
//}