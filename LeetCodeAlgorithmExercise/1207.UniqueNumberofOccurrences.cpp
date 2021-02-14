//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。
//    // 如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。
//    // 思路：遍历arr记录每一个数出现的次数，然后再遍历一次放次数的容器，如果有相等就false，不然默认true
//    // 注意：-1000 <= arr[i] <= 1000，1 <= arr.length <= 1000。可以用数组代替set
//    bool uniqueOccurrences(vector<int>& A) {
//        int arr[2001] = { 0 };
//        for (auto& i : A) {
//            arr[i + 1000]++;
//        }
//
//        int m[1000] = { 0 };
//        for (int i = 0; i < 2001; i++) {
//            if (arr[i] == 0) continue;
//            if (!m[arr[i] - 1]) {
//                return false;
//            }
//            m[arr[i] - 1]++;
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}