//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：nums[i]的值等于 当前值+前i-1个值的sum
//    // 思路：用变量记录前i-1个和，然后更新前i个值
//    // 当然也可以从1开始遍历，当前i的值等于当前值+i-1的值
//    vector<int> runningSum(vector<int>& nums) {
//        int sum = 0;
//        for (auto& i : nums) {
//            i += sum;
//            sum = i;
//        }
//
//        return nums;
//    }
//
//    // 两个其实都差不多..其实只要不用暴力就行
//    vector<int> runningSum(vector<int>& nums) {
//        for (int i = 1; i < nums.size(); i++) {
//            nums[i] += nums[i - 1];
//        }
//
//        return nums;
//    }
//
//};
//int main() {
//	return 0;
//}
