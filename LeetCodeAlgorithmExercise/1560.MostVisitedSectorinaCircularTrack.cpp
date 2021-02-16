//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：圆形赛道上经过次数最多的扇区
//    // 思路：因为是环形，所以没必要模拟全过程，关键只在rounds的头和尾
//    // 此时需要分类讨论:如果头小于尾
//    // 那么把头到尾所有数字放入res中并返回
//    // 如果头大于尾，那么需要把1到尾和头到n里面的元素放入res中并返回
//    // 如果头等于尾，那么直接返回这个头
//    vector<int> mostVisited(int n, vector<int>& rounds) {
//        vector<int> res;
//        int start = rounds[0], end = rounds[rounds.size() - 1];
//
//        if (start <= end) {
//            for (int i = start; i <= end; i++) {
//                res.push_back(i);
//            }
//        }
//        else { // 由于题目要求按扇区大小排序，因此我们要将区间分成两部分
//            for (int i = 1; i <= end; i++) {
//                res.push_back(i);
//            }
//            for (int i = start; i <= n; i++) {
//                res.push_back(i);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}