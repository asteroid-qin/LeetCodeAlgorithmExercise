//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // �ܼ򵥵�С����
//    int titleToNumber(string s) {
//        // ��¼���
//        int result = 0;
//
//        // ��¼����
//        int length = s.size();
//
//        // ��Ҫ��������ַ���(�ӵ�λ����λ)
//        for (int i = length - 1; i >= 0; i--) {
//            // �õ�ÿһ����ַ�Ȼ��ת������
//            result += (s[i] - 64) * pow(26, length - 1 - i);
//        }
//
//
//        return result;
//    }
//};
//
//int main() {
//    Solution s;
//    int r = s.titleToNumber("ZY");
//
//    cout << r << endl;
//	return 0;
//}