//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������ƶ�ͬһ��λ��
//    // ˼·���ҹ��ɣ�
//    // 1��ֱ�ӷ���0
//    // 2, �������ֵ����ͬ���жϵ�ǰ�������Ƿ�Ϊż���������Ϊż������0���������1
//    // �Ѿ��ҵ��ˣ��������ұ�������¼������������Ȼ�󷵻�������ż�������е���Сֵ
//    int minCostToMoveChips(vector<int>& position) {
//        int eve = 0;
//        for (auto& i : position) {
//            if (i % 2 == 0) {
//                eve++;
//            }
//        }
//
//        int odd = position.size() - eve;
//
//        return min(eve, odd);
//    }
//};
//
//int main() {
//	return 0;
//}