//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个二维数组是否左上角的值等于当前值
//    // 思路：写个for循环小心越界即可
//    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
//        for (int i = 0; i < matrix.size(); i++) {
//            for (int j = 0; j < matrix[0].size(); j++) {
//                if (i > 0 && j > 0 && matrix[i][j] != matrix[i - 1][j - 1]) {
//                    return false;
//                }
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