//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//
//    // Ŀ�꣺�����L��R���ж��ٸ�������������λ�����ɺܼ�
//    // ˼·��һ��whileѭ����L������R����дһ��while�õ���ǰL�ļ�����λ�����������λ�͵��������Ǿ�count++
//    // ע�⣡��������λָ����ת���ɶ�����1�ĸ���������L�ִ���0�����Բ���L��󣬽��������32����
//    // ����󷵻�count����
//    int countPrimeSetBits(int L, int R) {
//        int res = 0, n, count;
//
//        while (L <= R) {
//            n = L;
//            count = 0;
//
//            while (n) {
//                count++;
//                n &= n - 1;
//            }
//
//            if (judge(count)) {
//                res++;
//            }
//
//            L++;
//        }
//
//        return res;
//    }
//
//    bool judge(int n) {
//        switch (n) {
//        case 2:
//        case 3:
//        case 5:
//        case 7:
//        case 11:
//        case 13:
//        case 17:
//        case 19:
//        case 23:
//        case 29:
//        case 31:
//            return true;
//        default:
//            return false;
//        }
//    }
//};
//
//int main() {
//	return 0;
//}