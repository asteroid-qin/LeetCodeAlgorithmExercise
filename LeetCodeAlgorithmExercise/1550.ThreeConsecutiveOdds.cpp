//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ ����������������������
//    // ˼·���������ɡ���һ������count��¼���������Ĵ���������������++������ż����0��
//    // ��ĩβ�ж�count�Ƿ����3���Ǿ�true��Ĭ�Ϸ���false
//    // ���䣺�ж���żҲ������&1������true����������false����ż��
//    bool threeConsecutiveOdds(vector<int>& arr) {
//        int count = 0;
//
//        for (int& i : arr) {
//            if (i % 2 == 0) {
//                count = 0;
//            }
//            else {
//                count++;
//            }
//
//            if (count == 3) {
//                return true;
//            }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}