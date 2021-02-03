//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把二维数组的每一行先水平翻转，然后再取反
//    // 思路：水平翻转可以倒序遍历A的行，同时取反
//    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
//        vector<vector<int>> res(A.size(),vector<int>(A[0].size()));
//
//        for (int i = 0, col = A[0].size() - 1; i < A.size(); i++) {
//            for (int j = col; j >= 0; j--) {
//                res[i][col - j] = A[i][j]?0:1;
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