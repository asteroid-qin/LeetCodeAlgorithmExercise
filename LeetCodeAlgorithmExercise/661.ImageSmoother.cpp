//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算二维数组中以每一个下标为中心计算周围8的地方值的和，然后加上中心位置的值除以周围值的数量并把结果赋给中间位置
//    // 思路：两个for循环就足够了（注意！千万不要再M身上修改！应该自己从新new一个数组）
//    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
//        int count;
//        vector<vector<int>> res = M;
//        bool uFlag = false, dFlag = false, lFlag = false, rFlag = false;
//        for (int i = 0; i < M.size(); i++) {
//            for (int j = 0; j < M[0].size(); j++) {
//                // 以当前坐标为中心，计算四周八个位置的值之和
//                count = 1;
//
//                uFlag = (i - 1 >= 0);
//                dFlag = (i + 1 < M.size());
//                lFlag = (j - 1 >= 0);
//                rFlag = (j + 1 < M[0].size());
//
//                if (lFlag) {
//                    count++;
//                    res[i][j] += M[i][j - 1];
//                }
//                if (rFlag) {
//                    count++;
//                    res[i][j] += M[i][j + 1];
//                }
//
//                if (uFlag) {
//                    count++;
//                    res[i][j] += M[i - 1][j];
//                    if (lFlag) {
//                        count++;
//                        res[i][j] += M[i - 1][j - 1];
//                    }
//                    if (rFlag) {
//                        count++;
//                        res[i][j] += M[i - 1][j + 1];
//                    }
//                }
//                if (dFlag) {
//                    count++;
//                    res[i][j] += M[i + 1][j];
//                    if (lFlag) {
//                        count++;
//                        res[i][j] += M[i + 1][j - 1];
//                    }
//                    if (rFlag) {
//                        count++;
//                        res[i][j] += M[i + 1][j + 1];
//                    }
//                }
//
//                // 重新设置当前坐标的值
//                res[i][j] /= count;
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