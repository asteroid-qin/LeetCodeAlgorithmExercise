//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：距离顺序排列矩阵单元格
//    // 太简单了，直接过了..(这思路没什么写的必要，遍历+排序就完事了）
//    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
//        vector<vector<int>> ret;
//        for (int i = 0; i < R; i++) {
//            for (int j = 0; j < C; j++) {
//                ret.push_back({ i, j });
//            }
//        }
//        sort(ret.begin(), ret.end(), [=](vector<int>& a, vector<int>& b) {
//            return abs(a[0] - r0) + abs(a[1] - c0) < abs(b[0] - r0) + abs(b[1] - c0);
//            });
//
//        return ret;    
//    }
//};
//
//int main() {
//	return 0;
//}