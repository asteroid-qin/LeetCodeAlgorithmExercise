//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把nums中每个相同的数分到一组，过滤掉组数小于1的组，然后求每组的对数的和（每组n个元素，每次选2个）
//    // 思路：根据1 <= nums[i] <= 100，使用bucket记录每个数的数量
//    // 然后遍历这个数组，过滤掉值小于2。
//    // 大于1就计算当前值*当前值-1/2，然后加到res中。最后返回这个res
//    int numIdenticalPairs(vector<int>& nums) {
//        int res = 0;
//        int buck[100] = { 0 };
//        for (auto& i : nums) {
//            buck[i - 1]++;
//        }
//        for (auto& i : buck) {
//            if (i < 2) continue;
//            res += i * (i - 1) / 2;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}