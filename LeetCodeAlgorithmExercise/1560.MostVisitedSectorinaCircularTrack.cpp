//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺Բ�������Ͼ���������������
//    // ˼·����Ϊ�ǻ��Σ�����û��Ҫģ��ȫ���̣��ؼ�ֻ��rounds��ͷ��β
//    // ��ʱ��Ҫ��������:���ͷС��β
//    // ��ô��ͷ��β�������ַ���res�в�����
//    // ���ͷ����β����ô��Ҫ��1��β��ͷ��n�����Ԫ�ط���res�в�����
//    // ���ͷ����β����ôֱ�ӷ������ͷ
//    vector<int> mostVisited(int n, vector<int>& rounds) {
//        vector<int> res;
//        int start = rounds[0], end = rounds[rounds.size() - 1];
//
//        if (start <= end) {
//            for (int i = start; i <= end; i++) {
//                res.push_back(i);
//            }
//        }
//        else { // ������ĿҪ��������С�����������Ҫ������ֳ�������
//            for (int i = 1; i <= end; i++) {
//                res.push_back(i);
//            }
//            for (int i = start; i <= n; i++) {
//                res.push_back(i);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}