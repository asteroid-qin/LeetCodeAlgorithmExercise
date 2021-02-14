//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断coordinates中的点是否都在同一条直线上
//    // 思路：同一条直线就代表斜率相同。可以计算斜率。
//    // 从第三个元素开始，比较1与2的斜率是否相同，不相同就false，默认true
//    bool checkStraightLine(vector<vector<int>>& coordinates) {
//        for (int i = 2; i < coordinates.size(); i++) {
//            if ((coordinates[i][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0]) !=
//                (coordinates[i][0] - coordinates[0][0]) * (coordinates[1][1] - coordinates[0][1])) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}