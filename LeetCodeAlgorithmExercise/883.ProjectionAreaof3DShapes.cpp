//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������ά����ͶӰ���
//    // ˼·��������桢���桢��������֮�͡����棺ÿһ�����ֵ֮��
//    // ���棺ÿ�е����ֵ֮�ͣ����棺ÿһ�е���Ŀ
//    int projectionArea(vector<vector<int>>& grid) {
//        int res = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            // ÿһ�е����ֵ
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
//            // ÿһ�е����ֵ
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