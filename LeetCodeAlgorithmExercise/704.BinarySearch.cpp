//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：写一个二分查找。存在返回下标，不存在返回-1（注意题意，是不会溢出的）
//    int search(vector<int>& nums, int target) {
//        int l = 0, r = nums.size() - 1, mid;
//
//        while (l <= r) {
//            mid = (l + r) / 2;
//
//            if (nums[mid] == target) {
//                return mid;
//            }
//            else if (nums[mid] > target) {
//                r = mid - 1;
//            }
//            else {
//                l = mid + 1;
//            }
//        }
//
//        return -1;
//    }
//
//};
//int main() {
//	return 0;
//}