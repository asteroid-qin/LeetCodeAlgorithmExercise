//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：推荐直接看题意...(感觉没什么能概括的..)
//    // 总之就是要得到 arr中出现次数和本身值一样大的数，有多个就返回值最大的，一个都没有就返回-1（默认）
//    // 思路：1 <= arr[i] <= 500，直接计数排序，然后倒序遍历，遇到值和当前下标+1相等的就直接return，默认返回-1
//    int findLucky(vector<int>& arr) {
//        int buck[500] = { 0 };
//        for (int& i : arr) {
//            buck[i - 1]++;
//        }
//
//        for (int i = 499; i >= 0; i--) {
//            if (buck[i] == 0) continue;
//            if (buck[i] == i + 1) {
//                return buck[i];
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