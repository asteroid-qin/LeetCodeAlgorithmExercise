//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����N�ķ��벢����
//    // ˼·��������ʵ���� ����N��λ���η�- 1 - N�����磺5->101 ���룺111-101=10
//    // �������ֻҪ����N���׶���λ���ɡ���а�У�תstringȻ���size������
//    int bitwiseComplement(int N) {
//        if (N == 0) {
//            return 1;
//        }
//        int fa = 1; // λ�����ֵ
//
//        for (int temp = N; temp; temp >>= 1, fa <<= 1);
//
//        return fa - 1 - N;
//    }
//};
//
//int main() {
//	return 0;
//}