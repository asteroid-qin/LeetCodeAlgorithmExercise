//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：求一个数组的最大值的下标
//    // 直接二分法！！（这是一个特殊的排序数组！）
//    int peakIndexInMountainArray(vector<int>& arr) {
//        int left = 0, right = arr.size() - 1, mid;
//
//        while (left < right) {
//            mid = (left + right) / 2;
//
//            if (arr[mid] < arr[mid + 1]) {
//                left = mid + 1;
//            }
//            else {
//                right = mid;
//            }
//        }
//
//        return left;
//    }
//};
//
//int main() {
//	return 0;
//}