//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�coordinates�еĵ��Ƿ���ͬһ��ֱ����
//    // ˼·��ͬһ��ֱ�߾ʹ���б����ͬ�����Լ���б�ʡ�
//    // �ӵ�����Ԫ�ؿ�ʼ���Ƚ�1��2��б���Ƿ���ͬ������ͬ��false��Ĭ��true
//    bool checkStraightLine(vector<vector<int>>& coordinates) {
//        for (int i = 2; i < coordinates.size(); i++) {
//            if ((coordinates[i][1] - coordinates[0][1]) * (coordinates[1][0] - coordinates[0][0]) !=
//                (coordinates[i][0] - coordinates[0][0]) * (coordinates[1][1] - coordinates[0][1])) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}