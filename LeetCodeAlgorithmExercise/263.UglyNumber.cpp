//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�һ�����Ƿ�ֻ����2��3��5����
//    // ˼·������ǳ�������ônum����д�� pow(2,i)*pow(3,j)*pow(5,k)
//    // Ҳ����˵����num��ȥ2��3��5�����ӣ�����ǳ������ǽ��Ӧ����1��
//    bool isUgly(int num) {
//        // ��Ϊ0���κ���ȡ�඼����0�����Ե���ǰ�ų�
//        if (num == 0)
//            return false;
//        while (num % 2 == 0)
//            num /= 2;
//        while (num % 3 == 0)
//            num /= 3;
//        while (num % 5 == 0)
//            num /= 5;
//        // ���ֻҪ�ж���������Ƿ����1����
//        return num == 1;
//    }
//};
//
//int main() {
//	return 0;
//}