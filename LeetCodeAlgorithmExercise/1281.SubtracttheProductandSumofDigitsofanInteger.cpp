//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ������ n�������æ���㲢���ظ���������λ����֮�����롸��λ����֮�͡��Ĳ
//    // ˼·�����û��ʲô��ѧ��ʽ�Ļ�����ֻ�ܱ���������ͺͣ�Ȼ�󷵻ز�
//    int subtractProductAndSum(int n) {
//        int pro = 1, sum = 0;// ע�⣡1 <= n <= 10^5�����Բ���Ҫ���⴦��0
//
//        while (n) {
//            int bit = n % 10;
//            pro *= bit;
//            sum += bit;
//
//            n /= 10;
//        }
//
//        return pro - sum;
//    }
//};
//
//int main() {
//	return 0;
//}