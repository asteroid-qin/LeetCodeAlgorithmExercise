//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ǿ����ַ����ĳ���
//    // ˼·��res��¼��������ֵ����count��¼��ǰ�ַ��ĳ��ȡ�����һ��s������
//    int maxPower(string s) {
//        int res = 0 ,m = s.size();
//
//        for (int i = 0; i < m; i++) {
//            int count = 1;
//            char c = s[i];
//
//            while (i + 1 < m && s[i + 1] == c) {
//                i++;
//                count++;
//            }
//
//            res = max(res, count);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}