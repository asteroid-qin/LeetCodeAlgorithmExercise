//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���������Ǹ����� low �� high �����㷵�� low �� high ֮�䣨�������ߣ���������Ŀ��
//    // ˼·���������ۣ�
//    // ���low��high������������1-11����ô��6������ 
//    // �����Ϊż������4-10����ô��3������
//    // ���lowΪ����high��ż������3-10����ô��4������
//    // ���lowΪż����high����������4-11����ô��4������
//    // ������������Ϊż�����ǲ�ֵ/2��������ǲ�ֵ/2+1
//
//    // �ٷ��õ���ǰ׺...̫����..
//    int countOdds(int low, int high) {
//        bool f1 = (low % 2 == 0), f2 = (high % 2 == 0);
//
//        int num = (high - low) / 2;
//        if (f1 && f2) {
//            return num;
//        }
//        else{
//            return num + 1;
//        }
//    }
//
//    // �ٷ��⣺
//    int countOdds(int low, int high) {
//        return ((high + 1) >> 1) - (low >> 1);
//    }
//
//};
//
//int main() {
//	return 0;
//}