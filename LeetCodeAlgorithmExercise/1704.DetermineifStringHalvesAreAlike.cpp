//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺s����Ϊż�������м�����롣�ж����Ԫ���ĸ����Ƿ�����ұ�Ԫ���ĸ���
//    // ˼·����һ������count��¼����Ԫ���Ĳ顣���������ʱ������Ԫ��++���ұ�����Ԫ����--��
//    // ��󷵻�count�Ƿ����0����
//    bool halvesAreAlike(string s) {
//        int count = 0, i = 0;
//
//        while (i < s.size() / 2) {
//            count += judge(s[i++]);
//        }
//
//        while (i < s.size()) {
//            count -= judge(s[i++]);
//        }
//
//        return !count;
//    }
//
//    bool judge(char c) {
//        c &= 0xdf; // ת��д
//        switch (c) {
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U':
//            return true;
//        }
//
//        return false;
//    }
//
//};
//
//int main() {
//	return 0;
//}