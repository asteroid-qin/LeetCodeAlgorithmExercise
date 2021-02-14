//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个 m * n 的矩阵 grid，矩阵中的元素无论是按行还是按列，都以非递增顺序排列。 
//    // 请你统计并返回 grid 中 负数 的数目。
//    // 思路：直接遍历，用变量记录负数的数量即可。根据题意可以优化，倒序遍历列
//    // 对于一列，如果当前数大于0就break（行没必要倒序）
//    // 好吧，可以进行优化：顺序遍历每一行，倒序遍历每一列
//    // 优化部分：用一个变量来记录有多少列。负数的个数就等于列数*剩余行数
//    int countNegatives(vector<vector<int>>& grid) {
//        int count = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = grid[0].size() - 1; j >= 0; j--) {
//                if (grid[i][j] < 0) {
//                    count++;
//                }
//                else {
//                    break;
//                }
//            }
//        }
//
//        return count;
//    }
//
//    // 优化后的倒序遍历，时间复杂度O(m+n)
//    int countNegativesP(vector<vector<int>>& grid) {
//        int res = 0, m = grid.size(), n = grid[0].size();
//
//        for (int i = 0, pos = 0; i < m; i++) {
//            int count = 0;
//            for (int j = n - 1 - pos; j >= 0 && grid[i][j] < 0; j--, count++);
//
//            pos += count;
//            res += count * (m - i);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}