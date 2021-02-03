//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把A转置，也就是把A的每行变成每列
//    // 思路：for循环遍历即可
//    vector<vector<int>> transpose(vector<vector<int>>& A) {
//        vector<vector<int>> res(A[0].size(), vector<int>(A.size()));
//
//        for (int i = 0; i < res.size(); i++) {
//            for (int j = 0; j < res[0].size(); j++) {
//                res[i][j] = A[j][i];
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