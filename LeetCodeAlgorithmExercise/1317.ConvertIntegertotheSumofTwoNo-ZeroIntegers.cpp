//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������ת��Ϊ�������������ĺ�
//    // ˼·��ֱ��ö��
//    // ���߳��Բ��ÿһλ��ֻҪȥÿһλ��ֵ����ע��n < div����
//    vector<int> getNoZeroIntegers(int n) {
//        int m = 0;
//
//        for (int i = 0; ;i++) {
//            int div = pow(10, i);
//            m += div;
//            n -= div;
//
//            if (n < div) {
//                break;
//            }
//
//            if (n / div % 10 == 0) {
//                m += div;
//                n -= div;
//            }
//
//            if (n < div * 10) {
//                break;
//            }
//        }
//
//        return { m, n };
//    }
//};
//
//int main() {
//	return 0;
//}