//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回 k 次迁移操作后最终得到的 二维网格。
//    // 思路：把grid看做环形链表，k次迁移就是从指针移动k，并以K为开头。
//    // 所以对k%（m*n），得到的就是新的头，然后遍历一遍得到结果
//    // 关键是把二维数组怎么转换成一维环形链表处理
//    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//        int m = grid.size(), n = grid[0].size();
//        vector<vector<int>> res(m, vector<int>(n));
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                int newCol = (j + k) % n;
//                int temp = (j + k) / n;
//                int newRow = (i + temp) % m;
//                res[newRow][newCol] = res[i][j];
//            }
//        }
//
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}