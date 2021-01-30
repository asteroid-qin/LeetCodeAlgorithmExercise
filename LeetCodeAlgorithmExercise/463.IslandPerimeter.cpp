//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Solution {
//public:
//    // 目标：给定一个岛屿，v[i][j] = 1代表陆地，v[i][j]=0 代表水。求周长。
//    // 思路：遍历一次这个数组即可。先处理越界情况，再判断当前是水还陆地。是水就过掉
//    // 是陆地就判断当前陆地的前后左右的情况。如果是水就把边长+1，如果是陆地就不处理
//    // 这样遍历完这个二维数组就可以算出边长！！
//    int islandPerimeter(vector<vector<int>>& grid) {
//        int islandP = 0;
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                if (grid[i][j] == 0)
//                    continue;
//                // 如果当前是陆地，开始上下左右判断。越界直接+1
//                if (j - 1 < 0 || !grid[i][j - 1]) {
//                    islandP++;
//                }
//                if (j + 1 >= grid[0].size() || !grid[i][j + 1]) {
//                    islandP++;
//                }
//                if (i - 1 < 0 || !grid[i - 1][j]) {
//                    islandP++;
//                }
//                if (i + 1 >= grid.size() || !grid[i + 1][j]) {
//                    islandP++;
//                }
//             }
//        }
//
//        return islandP;
//    }
//};
//
//int main() {
//    vector<vector<int>> v;
//    v.push_back({ 1,2,3,4 });
//    v.push_back({ 1,2,3,4 });
//    v.push_back({ 1,2,3,4 });
//
//    cout << v.size() << endl;
//    cout << v[0].size() << endl;
//
//	return 0;
//}