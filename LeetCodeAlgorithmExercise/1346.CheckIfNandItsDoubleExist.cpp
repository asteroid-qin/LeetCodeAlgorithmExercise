//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� arr���������Ƿ������������ N �� M������ N �� M ������������N = 2 * M����
//    // ˼·��ʹ��set����ÿһ���������������
//    // ����arr�����Ե�ǰ��*2Ȼ����set��
//    // ���ҵ���ֱ�ӷ���true��Ĭ��false
//    // *2û���ҵ������жϵ�ǰ���Ƿ�2���������ԵĻ��ͳ����õ�ǰ��/2�ң��ҵ��ͷ���true
//    bool checkIfExist(vector<int>& arr) {
//        unordered_set<int> uset;
//
//        for (auto& i : arr) {
//            if (uset.count(i * 2) || ((i % 2 == 0) && uset.count(i / 2)) ) {
//                return true;
//            }
//
//            uset.insert(i);
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}