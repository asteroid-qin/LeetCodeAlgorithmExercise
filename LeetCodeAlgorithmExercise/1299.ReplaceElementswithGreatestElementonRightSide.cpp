//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ������ arr �����㽫ÿ��Ԫ�������ұ�����Ԫ���滻����������һ��Ԫ�أ��� -1 �滻��
//    // ˼·���Լ��½�һ�����飬����ֵ��dp��ζ��...
//    vector<int> replaceElements(vector<int>& arr) {
//        int m = arr.size();
//        vector<int> res(m);
//        res[m - 1] = -1;
//
//        for (int i = m - 2; i >= 0; i--) {
//            res[i] = max(res[i + 1], arr[i + 1]);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}