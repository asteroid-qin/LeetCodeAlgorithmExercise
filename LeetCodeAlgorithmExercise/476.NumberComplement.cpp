//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ����������������Ĳ����������ǶԸ����Ķ����Ʊ�ʾȡ����
//    // ˼·���ӵ����߱������ѵ�ǰλ&1�����Ϊ1�����������Ϊ0�Ͱ�ֵ�ۼ�
//    // ����һ��˼·���������������Ĳ�����ʵ���ǵ�ǰ�������λ^���㣬��������λ��
//    // ���� num ^ (2 << bit - 1) ����
//    int findComplement(int num) {
//        int result = 0;
//
//        int bit = 0;
//        while (num != 0) {
//            if (!(num & 1)) {
//                result += pow(2, bit);
//            }
//            bit++;
//            num >>= 1;
//        }
//
//        return result;
//    }
//	  // �����ٸ��������������	
//    int findComplement(int num) {
//        // С�����,�������ֵʱ2��31�η�-1.����������ÿ���ȡ��2��31�η���
//        unsigned int temp = 1;
//
//        while (num >= temp) {
//            temp <<= 1;
//        }
//        
//        return (temp - 1) ^ num;
//     }
//};
//
//int main() {
//
//    cout << ~5 << endl;
//
//	return 0;
//}