//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算连续k个数组中最大的平均数
//    // 思路：使用动态规划，先计算每个索引往后k-1个的和，然后取最大值，最后返回这个最大值/k即可
//    double findMaxAverage(vector<int>& nums, int k) {
//        int res = 0, preSum = 0, curSum = 0;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (i < k) {
//                preSum += nums[i];
//                res = preSum;
//            }
//            else {
//                curSum = preSum - nums[i - k] + nums[i];
//                res = max(res, curSum);
//
//                preSum = curSum;
//            }
//        }
//
//        return res * 1.0 / k;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> res = { 0,4,0,3,2 };
//    cout << "result:" << s.findMaxAverage(res, 1) << endl;
//
//	return 0;
//}