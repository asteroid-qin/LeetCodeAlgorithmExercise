//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把s分为两部分，计算左边0的个数和右边1的个数，求和的最大值
//    // 思路：先遍历一遍s计算1的个数one。然后再遍历一次s，分类讨论：
//    // 如果当前为0，zero++，用res记录zero+one的最大值
//    // 如果当前为1，one--，记录最大值
//    // 注意！需要留一位!!（因为遍历是从i至i+1处分割，根据题意不能分割最后一位）
//    int maxScore(string s) {
//        int res = 0, zero = 0, one = 0;
//
//        for (char& c : s) {
//            if (c == '1') {
//                one++;
//            }
//        }
//
//        for (int i = 0; i < s.size() - 1; i++) { // 预留一个数
//            if (s[i] == '1') {
//                one--;
//            }
//            else {
//                zero++;
//            }
//
//            res = max(res, one + zero);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}