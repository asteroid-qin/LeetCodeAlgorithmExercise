//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//    // 目标：把一个长度为2n的数组拆分成两队，每队取最小值。求在所有可能中每队和的最大值
//    // 思路：需要每一对的最小值的和是最大值，那么应该先选一个最小值然后在数组中选一个离数组最近的值。
//    // 只要让每对数之间的差距都是最低，那么他们每队的最小值的和就是最大值
//    int arrayPairSum(vector<int>& nums) {
//        // 直接排序
//        sort(nums.begin(), nums.end());
//        // 记录结果
//        int res = 0;
//        // 直接取最小值即可
//        for (int i = 0; i < nums.size(); i += 2) {
//            res += nums[i];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}