//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����1��n��ȫ���У�Ҫ��nΪ����ʱ����Ҫ������������λ���ϣ�����λ�ô�1��ʼ��
//    // ˼·���ȴ�1������n���õ��ж��ٸ���������������������ֻ�ܷ������������ϣ����Խ��Ӧ����
//    // ��������ȫ����+������ȫ���У�������%10^9 + 7��
//    // ������ӣ�100��ȫ���е�ֵ�޴���أ���Ҫ�ڼ���ȫ���е�ͬʱ����ֵ����ȡģ
//    int numPrimeArrangements(int n) {
//        if (n == 1) { // �����������
//            return 1;
//        }
//        int count = 0; // count ��������������
//        for (int i = 1; i <= n; i++) {
//            if (!judge(i)) {
//                count++;
//            }
//        }
//
//        int num = pow(10, 9) + 7;
//
//        return (getNum(count, num) * getNum(n - count, num)) % num;
//    }
//
//
//    bool judge(int n) {
//        if (n == 1) {
//            return true;
//        }
//
//        for (int i = 2; i <= sqrt(n); i++) {
//            if (n % i == 0) {
//                return true;
//            }
//        }
//
//        return false;
//    }
//
//
//    long getNum(int n, int& num) {
//        if (n == 1) {
//            return 1;
//        }
//
//        return (n % num * getNum(n - 1, num)) % num;
//    }
//};
//
//int main() {
//	return 0;
//}