//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断nums中是否每一个1都相隔k
//    // 思路：直接调用api，记录上次的位置，尝试这一次找（找不到直接break，默认true）
//    // 找到了，就用当前下标-上一次的下标-1，如果小于K直接返回false。每次查找都在上一次的基础上进行
//    bool kLengthApart(vector<int>& nums, int k) {
//        for (int i = 0, pre = -1; i < nums.size(); i++) {
//            if (nums[i] == 1) {
//                if (pre != -1 && i - pre - 1 < k) {
//                    return false;
//                }
//
//                pre = i;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}