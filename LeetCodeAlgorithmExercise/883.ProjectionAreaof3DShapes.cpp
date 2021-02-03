//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算三维形体投影面积
//    // 思路：求出正面、侧面、顶面的面积之和。正面：每一行最大值之和
//    // 侧面：每列的最大值之和，顶面：每一列的数目
//    int projectionArea(vector<vector<int>>& grid) {
//        int res = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            // 每一行的最大值
//            int maxRow = 0;
//
//            for (int j = 0; j < grid[0].size(); j++) {
//                if (grid[i][j] != 0) res++;
//                maxRow = max(maxRow, grid[i][j]);
//            }
//
//            res += maxRow;
//        }
//
//        for (int j = 0; j < grid[0].size(); j++) {
//            // 每一列的最大值
//            int maxCol = 0;
//            for (int i = 0; i < grid.size(); i++) {
//                maxCol = max(maxCol, grid[i][j]);
//            }
//
//            res +=  maxCol;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//    Solution s;
//
//    vector<vector<int>> grid = { {1,2} ,{3,4}};
//    cout << s.projectionArea(grid) << endl;
//
//	return 0;
//}