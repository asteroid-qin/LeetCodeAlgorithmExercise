//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标： 存在连续三个奇数的数组
//    // 思路：遍历即可。用一个变量count记录连续奇数的次数，遇到奇数就++，遇到偶数置0。
//    // 最末尾判断count是否等于3，是就true。默认返回false
//    // 补充：判断奇偶也可以用&1来处理，true代表奇数，false代表偶数
//    bool threeConsecutiveOdds(vector<int>& arr) {
//        int count = 0;
//
//        for (int& i : arr) {
//            if (i % 2 == 0) {
//                count = 0;
//            }
//            else {
//                count++;
//            }
//
//            if (count == 3) {
//                return true;
//            }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}