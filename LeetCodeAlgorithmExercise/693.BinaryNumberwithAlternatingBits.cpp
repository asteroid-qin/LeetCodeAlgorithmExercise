//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�һ�����������Ƿ�1��0�������
//    // ˼·����һ����������¼��һλ��ֵ�������ǰλ����һλ����Ⱦ�return false
//    bool hasAlternatingBits(int n) {
//        bool flag = (n & 1)?0:1, m;
//        while (n) {
//            m = n & 1;
//            if (flag == m) {
//                return false;
//            }
//
//            n >>= 1;
//            flag = m;
//        }
//
//        return true;
//    }
//    
//    bool hasAlternatingBits(int n) { // 101 010 111
//        int m = (n ^ (n >> 1));
//
//        return (m & n) == 0;
//    }
//};
//
//int mian() {
//	return 0;
//}