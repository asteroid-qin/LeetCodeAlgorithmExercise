//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ǹ�������vector��������Ҫ�ֳ����룬Ҫ������һ���������ɶ����ֲ�ͬ����
//    // ˼·���������������ᳬ�����鳤�ȵ�һ��������������飬�����ж����ֲ�ͬ�����֡�
//    // �ж��������Ƿ�������鳤�ȵ�һ�룬�ǵĻ��ͷ������鳤�ȵ�һ�룬��Ȼ�ͷ���������
//    int distributeCandies(vector<int>& candyType) {
//        int arr[20001] = {0};
//        int excursion = 10000;
//        // ��¼�ж��ٲ��ظ�����
//        int res = 0;
//        for (auto i : candyType) {
//            if (arr[i + excursion] == 0) {
//                res++;
//            }
//            arr[i + excursion] = 1;
//        }
//
//        int maxRes = candyType.size() / 2;
//        return res > maxRes ? maxRes : res;
//    }
//};
//
//int main() {
//	return 0;
//}