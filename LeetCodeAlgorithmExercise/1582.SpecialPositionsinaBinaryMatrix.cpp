//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�뷵�� ���� mat ������λ�õ���Ŀ ��
//    // ˼·������һ��mat�õ��еĺ��еĺ�
//    // ����һ���к͡��кͣ����������1����res++����󷵻����res
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