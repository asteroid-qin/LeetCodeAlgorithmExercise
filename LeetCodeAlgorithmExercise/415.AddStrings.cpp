//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ʹ�ÿ⺯���������ַ���ת��������Ҫ��������Ǹ������ַ������
//    // ˼·��˫ָ��+��λ���жϼ��ɣ�ֱ��һ����whileѭ���㶨��
//    string addStrings(string num1, string num2) {
//        // ��ʼ�����ؽ��
//        string s;
//
//        // ��ӿ϶��Ǵӵ�λ����λ��
//        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
//
//        while (i >= 0 || j >= 0 || carry == 1) {
//            int x = i >= 0 ? num1[i] - '0' : 0;
//            int y = j >= 0 ? num2[j] - '0' : 0;
//            int result = x + y + carry;
//            s.push_back('0' + result % 10);
//            carry = result / 10;
//            i--;
//            j--;
//        }
//
//        reverse(s.begin(), s.end());
//        
//        // ���ؽ��
//        return s;
//    }
//};
//
//int main() {
//	return 0;
//}