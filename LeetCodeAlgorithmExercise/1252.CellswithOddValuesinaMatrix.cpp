//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：在执行完所有 indices 指定的增量操作后，返回矩阵中 「奇数值单元格」 的数目。
//    // 思路：最简单的就是建一个二维矩阵遍历一遍indices，然后再遍历一遍矩阵算出奇术的次数
//    // 但是这是最蠢的办法，根据题意，indices每一个x和y代表着每一行和每一列+1
//    // 所以只需要记住每行+1的次数和每列+1的次数，就得出当前行+1的次数
//    // 这样就没必要准备m*n大小的矩阵，而是m+n就足够了（完成对空间的优化）也不需要遍历对每一行每一列++，时间复杂度也显著降低
//    // 看了题解，发现方法三实在是太妙了。在上面的基础上求奇数值单元格的数目只有两种情况：
//    // 一种是当前行为奇、列为偶数，一种是当前行为偶、列为奇数
//    // 所以没必要每一轮遍历行列，可以使用计数，直接计算出每一种可能
//    // 答案其实就是：行为奇数的数目*列为偶数的数目+列为奇数的数目+行为偶数的数目
//    int oddCells(int n, int m, vector<vector<int>>& indices) {
//        vector<vector<int>> matrix;
//
//        for (auto v : indices) {
//            for (int i = 0; i < m; i++) {
//                matrix[v[0]][i]++;
//            }
//            for (int i = 0; i < n; i++) {
//                matrix[i][v[1]]++;
//            }
//        }
//        int count = 0;
//        for (auto& v : matrix) {
//            for (auto& i : v) {
//                if (i % 2 == 1) {
//                    count++;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    int oddCellsP(int n, int m, vector<vector<int>>& indices) {
//        vector<int> row(n, 0);
//        vector<int> col(m, 0);
//
//        for (auto& v : indices) {
//            row[v[0]]++;
//            col[v[1]]++;
//        }
//        int count = 0;
//        for (auto& i : row) {
//            for (auto& j : col) {
//                if ((i + j) % 2 == 1) {
//                    count++;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    // 太妙了..
//    int oddCellsPP(int n, int m, vector<vector<int>>& indices) {
//        vector<int> row(n, 0);
//        vector<int> col(m, 0);
//
//        for (auto& v : indices) {
//            row[v[0]]++;
//            col[v[1]]++;
//        }
//        int obb_row = 0, obb_col = 0;
//        for (auto& i : row) {
//            if (i % 2 == 1) {
//                obb_row++;
//            }
//        }
//        for (auto& i : col){
//            if (i % 2 == 1) {
//                obb_col++;
//            }
//        }
//
//        return obb_row * (m - obb_col) + obb_col * (n - obb_row);
//    }
//};
//
//
//int main() {
//	return 0;
//}