//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // �������⣬��Ҫ�ڹ�Ʊ����������һ���˳����������
//    // ������󲻾��ǵͼ�����߼�������
//    // ˼·�������ҳ���Сֵ��Ȼ������Сֵ�����ҵ����ֵ
//    // �ðɣ����⿨���ˣ���Ҫ��������Ľ�������˰ѱ�������dp��
//    int maxProfit(vector<int>& prices) {
//        // ������������һ����¼��͵ļ۸�һ����¼��������
//        int minPrice = INT_MAX, maxProfit = 0;
//
//        for (int i = 0; i < prices.size(); i++) {
//            minPrice = min(minPrice, prices[i]);
//            maxProfit = max(maxProfit, prices[i] - minPrice);
//        }
//
//        return maxProfit;
//    }
//};
//
//// ����
//int main() {
//    // ׼��vector
//    vector<int> v = { 7,1,5,3,6,4 };
//
//    Solution s;
//    int r = s.maxProfit(v);
//
//    cout << "�������Ϊ��" << r << endl;
//
//    return 0;
//}
