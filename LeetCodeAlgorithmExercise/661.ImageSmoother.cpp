//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����ά��������ÿһ���±�Ϊ���ļ�����Χ8�ĵط�ֵ�ĺͣ�Ȼ���������λ�õ�ֵ������Χֵ���������ѽ�������м�λ��
//    // ˼·������forѭ�����㹻�ˣ�ע�⣡ǧ��Ҫ��M�����޸ģ�Ӧ���Լ�����newһ�����飩
//    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
//        int count;
//        vector<vector<int>> res = M;
//        bool uFlag = false, dFlag = false, lFlag = false, rFlag = false;
//        for (int i = 0; i < M.size(); i++) {
//            for (int j = 0; j < M[0].size(); j++) {
//                // �Ե�ǰ����Ϊ���ģ��������ܰ˸�λ�õ�ֵ֮��
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
//                // �������õ�ǰ�����ֵ
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