//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���س˿ʹӳ����� start ��Ŀ�ĵ� destination ֮�����̾��롣
//    // ˼·������˳ʱ���start��destination,��¼ֵ
//    // ������ʱ���start��destination,��¼ֵ
//    // �������߼����Сֵ
//    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
//        int n = distance.size();
//        int n1 = 0, n2 = 0;
//        for (int i = start; i % n != destination; i++) {
//            n1 += distance[i % n];
//        }
//        for (int i = destination; i % n != start; i++) {
//            n2 += distance[i % n];
//        }
//
//        return min(n1, n2);
//    }
//};
//
//int main() {
//	return 0;
//}