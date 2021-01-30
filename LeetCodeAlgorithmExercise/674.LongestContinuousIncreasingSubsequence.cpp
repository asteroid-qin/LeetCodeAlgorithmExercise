//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回未排序数组的最长连续递增子序列的长度
//    // 思路：res记录结果，count记录连续递增子序列的值。从0开始，如果当前数>=第二个数，count=1,
//    // 如果当前数<第二个数，count++
//    int findLengthOfLCIS(vector<int>& nums) {
//        int res = 0, count = 1;
//
//        for (int i = 0; i + 1 < nums.size(); i++) {
//            count = (nums[i] < nums[i + 1]) ? count + 1 : 1;
//            res = max(res, count);
//        }
//
//        return nums.size() == 0 ? 0 :res;
//    }
//};
//
//int main() {
//	return 0;
//}