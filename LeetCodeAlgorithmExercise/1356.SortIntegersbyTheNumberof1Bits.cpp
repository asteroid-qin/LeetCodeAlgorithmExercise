//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<bitset>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������ֶ������� 1 ����Ŀ����
//    // ˼·������sortAPI��������..�ȼ���������ת�ɶ�������1�ĸ�����
//    // �����Ⱦ�ֱ�ӱȴ�С���������ȷ�����߸���С���ұߣ���Щ��̫���ˣ�apiֱ�ӹ���
//    vector<int> sortByBits(vector<int>& arr) {
//        sort(arr.begin(), arr.end(), [=](int& i, int j) {
//            int x = bitset<32>(i).count();
//            int y = bitset<32>(j).count();
//            if (x == y) {
//                return i < j;
//            }
//
//            return  x < y;
//            });
//
//        return arr;
//    }
//};
//
//int main() {
//	return 0;
//}