//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����ѡ������������Ϊ��ʼֵ�������ұ�������nums�ۼ�ÿ�ε�ֵ��Ҫ��ÿ���ۼӺ����ٴ��ڵ���1
//    // �������С������ֵ
//    // ˼·��Ҫ��ÿ���ۼӺͶ����ٴ��ڵ���1��Ҳ���ǵ����ÿ���ۼӺ͵���Сֵ��ֻҪ���������Сֵ���ڵ���1����
//    // ����ֻҪ����nums���õ��ۼӹ����е���Сֵ��
//    // ��������Сֵ���ڵ���0����ô������С����1
//    // ��������СֵС��0����ô����1 - ��Сֵ
//    int minStartValue(vector<int>& nums) {
//        int minSum = INT_MAX, sum = 0;
//        for (auto& i : nums) {
//            sum += i;
//            minSum = min(minSum, sum);
//        }
//
//        if (minSum < 0) {
//            return 1 - minSum;
//        }
//
//        return 1;
//    }
//};
//
//int main() {
//	return 0;
//}