//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ջ�����1-n��Ԫ�أ�ͨ�����ֲ����õ�target���飬����ֲ��������ַ���������ʽ���أ�
//    // ˼·����1������n���۲�target��
//    // �����ǰtarget[pos] == i���ͷ���push,Ȼ��pos++(ѭ������Ϊ��pos < target.size())
//    // ��������ڣ������������һ��pushһ��pop����������ѭ����pos��++
//    vector<string> buildArray(vector<int>& target, int n) {
//        vector<string> res;
//
//        for (int i = 1, pos = 0; pos < target.size(); i++, pos++) {
//            res.push_back("Push");
//
//            if (target[pos] != i) {
//                res.push_back("Pop");
//                pos--;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}