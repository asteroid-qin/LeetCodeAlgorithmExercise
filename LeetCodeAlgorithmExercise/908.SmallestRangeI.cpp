//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� A������������е�ÿ��Ԫ�� A[i] ������һ���������� x ��-K <= x <= K�����Ӷ��õ�һ�������� B ��
//    // �������� B �����ֵ����Сֵ֮����ܴ��ڵ���С��ֵ��
//    // ˼·���ȱ���һ�εõ����ֵ����Сֵ��Ȼ��������ֵ����Сֵ�Ĳ�ֵ����������ֵʱС�ڵ���K�ģ���ô����0
//    // ��Ȼ���������ֵ-2K���������ʱ��ô���ģ��������⣬��ֵ���Ա�K��С�����ֵ-K����Сֵ+K���������2K���롣
//    // 2K������Ȼ��С��ֵΪ0��������ǲ�ֵ��ȥ�ܹ����̵�������
//    int smallestRangeI(vector<int>& A, int K) {
//        int maxNum = INT_MIN, minNum = INT_MAX;
//
//        for (int& i : A) {
//            maxNum = max(maxNum, i);
//            minNum = min(minNum, i);
//        }
//
//        return max(maxNum - minNum - 2 * K, 0);
//    }
//};
//
//int main() {
//	return 0;
//}