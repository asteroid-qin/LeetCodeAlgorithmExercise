//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�Ѷ�ά�����ÿһ����ˮƽ��ת��Ȼ����ȡ��
//    // ˼·��ˮƽ��ת���Ե������A���У�ͬʱȡ��
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