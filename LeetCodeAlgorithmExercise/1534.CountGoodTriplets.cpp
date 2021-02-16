//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回 好三元组的数量 。
//    // 思路：直接三层for循环，暴力枚举
//    // 看了一下官方题解，发现有优化部分！！O(n^3)直接变O(n^2+nS)!!看的脑阔tong...
//    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
//        int count = 0;
//
//        for (int i = 0; i < arr.size() - 2; i++) {
//            for (int j = i + 1; j < arr.size() - 1; j++) {
//                for (int k = j + 1; k < arr.size(); k++) {
//                    if ((abs(arr[i] - arr[j]) <= a) && (abs(arr[j] - arr[k]) <= b) && (abs(arr[i] - arr[k]) <= c)) {
//                        count++;
//                    }
//                }
//            }
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}