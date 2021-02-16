//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：请返回 矩阵 mat 中特殊位置的数目 。
//    // 思路：遍历一遍mat得到行的和列的和
//    // 遍历一遍行和、列和，如果都等于1，就res++。最后返回这个res
//    int numSpecial(vector<vector<int>>& mat) {
//        int m = mat.size(), n = mat[0].size();
//        int res = 0;
//
//        vector<int> rows(m, 0), cols(n, 0);
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                rows[i] += mat[i][j];
//                cols[j] += mat[i][j];
//            }
//        }
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                if (mat[i][j] == 1 && rows[i] == 1 && cols[j] == 1) {
//                    res++;
//                }
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