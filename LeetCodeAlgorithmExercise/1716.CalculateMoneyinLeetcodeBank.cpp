//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������������ҹ���
//    // ˼·����������day������week��n/7����ȥ��һ�ܣ�
//    // �ȼ����ܹ�ȡ����ÿ�ܵ�������28 * week + (7 * week - 7) * week / 2
//    // �ټ������һ�ܣ����week + 1��β�week + day��������day��������͹�ʽ�������ɽ��
//    int totalMoney(int n) {
//        //week: 1  28
//        //      2  28+7
//        //      3  28+7+7     
//        //      4  28+7+7 
//        int day = n % 7, week = n / 7;
//
//        return 28 * week + (7 * week - 7) * week / 2 + (week + 1 + week + day) * day / 2;
//    }
//};
//
//int main() {
//	return 0;
//}