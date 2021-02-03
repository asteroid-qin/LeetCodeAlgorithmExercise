//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算三位物体的表面积...(底面也算..)
//    // 思路：for循环遍历这个数组，对于上下左右都是为0或者不可取，那么就+1，最多+4，然后任何一个非0元素可以+2.
//    // 遍历结束，得到结果
//    int surfaceArea(vector<vector<int>>& grid) {
//        int res = 0;
//        int offsetX[] = { -1,1,0,0}; // 依次是上下左右
//        int offsetY[] = { 0,0,-1,1};
//
//        for (int i = 0; i < grid.size(); i++) {
//            for (int j = 0; j < grid[0].size(); j++) {
//                // 依次判断上下左右是否可取
//                for (int k = 0, x, y, dif; k < 4; k++) {
//                    x = i + offsetX[k];
//                    y = j + offsetY[k];
//                    bool over = ((x < 0 || x >= grid.size()) || (y < 0 || y >= grid[0].size()) );
//                    if (over || grid[x][y] == 0) {
//                        res += grid[i][j];
//                    }
//                    else { // 否则就是有障碍！！如果当前比障碍物要高，那么就把高出的部分作为表面积
//                        dif = grid[i][j] - grid[x][y];
//                        if (dif > 0) {
//                            res += dif;
//                        }
//                    }
//                }
//                if (grid[i][j]) { // 如果当前不是0，就把上下面积加上去
//                    res += 2;
//                }
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}