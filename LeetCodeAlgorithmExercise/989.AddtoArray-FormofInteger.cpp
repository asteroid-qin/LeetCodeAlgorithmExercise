//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��K�������ÿһλÿһλ�ؼ��뵽A��
//    // ˼·��׼��һ�����飬��i�Ӻ���ǰ����A�����i>=0����Ҫ�ѵ�ǰֱֵ�Ӹ���A����������׷�ӣ����ת��������õ����
//    // ��������ĵ�һ������μ������ǰλ�������A��K��ǰλ֮�ʹ���9����ô��λ����α��棿
//    // �������ͨ����A�ĵ�ǰ���Ӹ�K�ķ�������λ�������Լ���ȡһ������Ҳ�У��������������λ����Ӵ���9����ôK�Լ����λ
//    // ����K/=10����λ��ֵҲ�ᱣ��������
//    vector<int> addToArrayForm(vector<int>& A, int K) {
//        int m = A.size();
//        vector<int> res(m);
//
//        for (int i = m - 1; i >= 0 || K != 0; K /= 10) {
//            if (i >= 0) {
//                K += A[i];  // ���һ��
//
//                res[m - i + 1] = K % 10;
//                i--;
//            }
//            else {
//                res.push_back(K % 10);
//            }
//
//        }
//
//        reverse(res.begin(), res.end());
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}