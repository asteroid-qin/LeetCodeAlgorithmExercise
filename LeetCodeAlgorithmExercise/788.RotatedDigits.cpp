//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算出1到N好数的个数
//    // 思路：从1到N，直接暴力计算，判断当前数是否是好数
//    // 还可以使用动态规划，时间复杂度可以从O(NlogN)降低到O(logN)。这里只是简单题，目前只写暴力法就足够了
//    int rotatedDigits(int N) {
//        int arr[10] = { 0,0,1,-1,-1,1,1,-1,0,1 };
//        int res = 0;
//        while (N != 0) {
//
//            int i = N, count = 0;
//            while (i) {
//                int carry = i % 10;
//
//                if (arr[carry] == -1) {
//                    goto to;
//                }
//                count += arr[carry];
//
//                i /= 10;
//            }
//
//            if (count > 0) {
//                res++;
//            }
//
//            to:N--;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}