//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标:判断连续1的个数
//    // 思路：一个for循环，如果当前数是1就++，如果不是就变成0。求max
//    // 太简单了..下一个！！
//    int findMaxConsecutiveOnes(vector<int>& nums) {
//        int res = 0;
//        int num = 0;
//        for (auto i : nums) {
//            if (i == 1) {
//                num++;
//            }
//            else {
//                num = 0;
//            }
//
//            res = max(res, num);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}