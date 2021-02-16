//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算矩阵对角线元素的和。(正方形！)
//    // 思路：拿到边长，遍历即可
//    int diagonalSum(vector<vector<int>>& mat) {
//        int m = mat.size(), res = 0;
//
//        for (int i = 0; i < m; i++) {
//            res += mat[i][i] + mat[i][m - i - 1];
//        }
//
//        if (m & 1) { // 如果长度为奇数，需要去掉中间重复的数字
//            return res - mat[m / 2][m / 2];
//        }
//
//        return res; 
//    }
//};
//
//int main() {
//	return 0;
//}