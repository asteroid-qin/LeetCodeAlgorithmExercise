//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ������ n�����㷵�� ���� һ���� n �� ������ͬ ��������ɵ����飬������ n ������Ӻ�Ϊ 0 ��
//    // ˼·���ж�����������ż�����ȴ���n��С������
//    // �����ż������ô����һ�飬i+=2��ÿ��i=i+1��i+1=��i+1��*-1�����յõ����
//    // �������������ô����һ�飬������ż�����֡����һλ����0
//    vector<int> sumZero(int n) {
//        vector<int> res(n);
//
//        for (int i = 0; i < n - 1; i += 2) {
//            res[i] = i + 1;
//            res[i + 1] = (i + 1) * -1;
//        }
//
//        if(n % 2 == 1) res[n - 1] = 0;
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}