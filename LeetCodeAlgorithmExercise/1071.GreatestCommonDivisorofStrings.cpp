//#include<iostream>
//#include <numeric>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����str1��str2����Ĺ������ַ���
//    // ˼·���ٷ���1����д�����ˣ��޷��ǴӴ�Сƴ���������ж��Ƿ��������ַ��������ӡ����ͬʱ����ͷ�������ַ���
//    // ���Ǹ��ݹٷ���2����������Ӵ�С�ĵ����ӣ�ֱ����str1��str2���ȵ�������ӣ�����str1����str2�д�0��������������
//    // ���н�ȡ��������ڣ���ô�����ȡ�ĵ����ַ������Ǵ𰸡�
//    // ���ɣ���3�͸����ˣ�֤���������Ժ����ģ��о��Ҳ����ص㡣��֮����򵥵�д�������ˣ���Щ�Ż����Լ�ס�����Ժ���������ĥ
//    string gcdOfStrings(string str1, string str2) {
//        // ����д�������Ľ�3
//        if (str1 + str2 != str2 + str1) return "";
//        return str1.substr(0, gcd((int)str1.length(), (int)str2.length()));
//    }
//
//    int gcd(int a, int b) { // ��ת�����
//        return b == 0 ? a : gcd(b, a % b);
//    }
//
//};
//
//int main() {
//    Solution s;
//
//    cout << s.gcd(48,36) << endl;
//
//	return 0;
//}