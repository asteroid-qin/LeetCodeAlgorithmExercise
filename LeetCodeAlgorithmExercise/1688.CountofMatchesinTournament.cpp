//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����ڱ����н��е���Դ�����
//    // ˼·��whlieѭ�����ɡ���Ŀ��ʽ��д����...
//    // ����ϸ���룬���ֲ���...����n�����飬һ���ھ�����Ҫ��̭n-1�� ���顣
//    // ÿһ��������̭һ�����飬��˽�����n-1�����������Թ���n - 1����ԡ�
//    int numberOfMatches(int n) {
//        int res = 0;
//        bool flag;
//
//        while (n > 1) { // ��ʤ������n=1����ֻʣ��һ������
//            flag = n & 1;
//            n >>= 1;
//            res += n;
//            n += flag; // ��������+1
//        }
//
//        return res;
//    }
//
//    // ̫������..
//    int numberOfMatchesP(int n) {
//        return n - 1;
//    }
//};
//
//int main() {
//	return 0;
//}