//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����A������ȼ��ַ��������������Ŀ�����ǳ�������Ҫ˳��ʾ����������˼·
//    // �ٸ����ӣ����A����3���ַ���a��b��c������a��b�ܹ�������ȼ��ַ����飬��ô����ͷ���2
//    // �����4���ַ���a��b��c��d������a��b��c�ܹ���������ȼ��ַ����飬��ô����2
//    // ��˵˵˼·������Ҫ�����A��ԭʼ�ṹ������������桢ż�����±���ַ����ֱ�õ������ַ�����
//    // ���������ַ�����������������ӷ���set�С�
//    // ���a��b������ȼ۵ģ���ô������������ַ���Ӧ����ͬ����Ϊ�ַ����Ѿ������ˣ���
//    // ͨ��set�����԰ѹ�������ȼ��ַ�������ַ����ں�Ϊ1�飬���շ��ؼ��ϵ�size��������Ҫ�Ľ��
//    int numSpecialEquivGroups(vector<string>& A) {
//        unordered_set<string> jihe;
//        for (int i = 0; i < A.size(); i++) {
//            string a = "", b = "";
//            for (int j = 0; j < A[i].size(); j++) {
//                if (j % 2 == 0)a += A[i][j];
//                else b += A[i][j];
//            }
//            sort(a.begin(), a.end());
//            sort(b.begin(), b.end());
//            jihe.insert(a + b);
//
//        }
//        return jihe.size();
//    }
//};
//
//int main() {
//	return 0;
//}