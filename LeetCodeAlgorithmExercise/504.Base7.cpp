//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��һ����ת��7�����ַ���
//    // ˼·�����չ�ʽ���ɣ�
//    string convertToBase7(int num) {
//        // ��Ҫ����0��һ�������
//        if (!num) {
//            return "0";
//        }
//
//        string res;
//        int temp = abs(num);
//
//        while (temp != 0) {
//            // �ڰ�����ת��string����res����׷�Ӽ���
//            res.push_back(temp % 7 + '0');
//            temp /= 7;
//        }
//       
//        // ע�⣡������Ҫ��ǰ�����һ������
//        if (num < 0) {
//            res.push_back('-');
//        }
//
//        // ����ٷ�ת
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};
//
//int main() {
//    Solution s;
//    cout << s.convertToBase7(-7) << endl;
//
//    string str;
//    str.push_back((char)(1 + '0'));
//    cout << str << endl;
//
//	return 0;
//}