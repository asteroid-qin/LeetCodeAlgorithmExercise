//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // ��ԭ���Ļ������ټ���һ������
//    int maxProfit(vector<int>& prices) {
//
//        // ������������һ����¼��͵ļ۸�
//        int minPrice = INT_MAX, maxProfit = 0;
//        // ׼��һ��������¼��
//        int sum = 0;
//
//        for (int i = 0; i < prices.size(); i++) {
//            // ���������治Ϊ0���ҵ�ǰ�������ȥ�������棬��Ӧ���ǰ�ֵ����sum�У����¿�ʼ
//            if (maxProfit != 0 && maxProfit > prices[i] - minPrice) {
//                sum += maxProfit;
//                minPrice = prices[i];
//                maxProfit = 0;
//            }
//
//            minPrice = min(minPrice, prices[i]);
//            maxProfit = max(maxProfit, prices[i] - minPrice);
//        }
//
//        return sum + maxProfit;
//    }
//};
//
//// һ�ι����Ͳ������ˡ���
//int main() {
//    return 0;
//}