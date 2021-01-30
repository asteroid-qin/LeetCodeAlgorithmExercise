//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 升级版的两数之和。是从一个已经排好序的数组里求target
//    // 官方推荐双指针,看着解析自己很轻松就写出来了..（一次过）
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int i = 0, j = numbers.size() - 1;
//        int now = 0;
//        while (i < j) {
//            now = numbers[i] + numbers[j];
//
//            if (now < target) {
//                i++;
//            }
//            else if (now > target) {
//                j--;
//            }
//            else {
//                return {i + 1, j + 1};
//            }
//        }
//
//        return {-1,-1};
//    }
//};
//
//int main() {
//
//
//	return 0;
//}