//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��������ת���ɶ�����ʱ��λ������ͬ�ĸ���
//    // ˼·����x��y��������㣬�õ�������1�ĸ������ǽ��
//    // ��1�ĸ��������ֲ��֣�
//    // 1������api��2���Լ�дһ����λ����
//    // 3����������������㷨��ͨ��x & (x-1) ������ȥ���ұߵ�1�����ټ���1������
//    int hammingDistance(int x, int y) {
//        // �������Լ�д����λ
//        int count = 0;
//        x = x ^ y;
//
//        // ע��������x��y������0
//        while (x != 0) {
//            count += (x & 1);
//            x >>= 1;
//        }
//
//        return count;
//    }
//
//    // �����ʹ�ÿ�����㷨
//    int hammingDistanceP(int x, int y) {
//        x = x ^ y;
//        int count = 0;
//        while (x != 0) {
//            x = x & (x - 1);
//            // whileѭ���Ĵ�������1�ĸ���
//            count++;
//        }
//
//        return count;
//    }
//    
//};
//
//int main() {
//
//    cout << (1 ^ 1) << endl;
//    cout << (0 ^ 1) << endl;
//    cout << (0 ^ 0) << endl;
//
//	return 0;
//}