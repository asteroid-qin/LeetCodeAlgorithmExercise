//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//    // 目标：找出一个数，是第二大的数的两遍
//    // 一个for循环，找出第一和第二大数，判断条件是否成立。是就返回第一大数的下标，否则返回-1
//    int dominantIndex(vector<int>& nums) {
//        int f = -1, s = -1, maxIndex = -1;
//
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > f) {
//                s = f;
//                f = nums[i];
//                maxIndex = i;
//            }
//            else if (nums[i] == f) {
//                continue;
//            }
//            else if (nums[i] > s) {
//                s = nums[i];
//            }
//
//        }
//
//        return (f < s * 2) ? -1 : maxIndex;
//    }
//};
//
//int main() {
//	return 0;
//}