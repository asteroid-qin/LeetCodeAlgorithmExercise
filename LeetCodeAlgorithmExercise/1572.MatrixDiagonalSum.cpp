//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������Խ���Ԫ�صĺ͡�(�����Σ�)
//    // ˼·���õ��߳�����������
//    int diagonalSum(vector<vector<int>>& mat) {
//        int m = mat.size(), res = 0;
//
//        for (int i = 0; i < m; i++) {
//            res += mat[i][i] + mat[i][m - i - 1];
//        }
//
//        if (m & 1) { // �������Ϊ��������Ҫȥ���м��ظ�������
//            return res - mat[m / 2][m / 2];
//        }
//
//        return res; 
//    }
//};
//
//int main() {
//	return 0;
//}