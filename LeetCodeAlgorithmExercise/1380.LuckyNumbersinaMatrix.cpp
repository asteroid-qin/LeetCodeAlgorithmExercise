//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�� m * n �ľ��󣬾����е����� ������ͬ �����㰴 ���� ˳�򷵻ؾ����е�������������
//    // ˼·������matrix���ɡ����ݾ����е�����Ԫ�ض��ǲ�ͬ�ġ��ȱ���ÿһ�е���Сֵ
//    // �ҵ�������set��
//    // �ٱ����ҵ�ÿһ�е����ֵ���õ����ֵ�����set�п����ҵ��ͷ���res�У����򲻴���
//    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
//        vector<int> res;
//        unordered_set<int> ms;
//
//        for (auto& v : matrix) { // ÿһ�е���Сֵ
//            int num = INT_MAX;
//            for (int& i : v) {
//                num = min(num, i);
//            }
//            ms.insert(num);
//        }
//
//        for (int i = 0; i < matrix[0].size(); i++) { // ÿһ�е����ֵ
//            int num = INT_MIN;
//            for (int j = 0; j < matrix.size(); j++) {
//                num = max(num, matrix[j][i]);
//            }
//
//            if (ms.count(num)) {
//                res.push_back(num);
//            }
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}