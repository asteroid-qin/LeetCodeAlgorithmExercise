//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������ͬ�ַ�֮�������ַ����ĳ��� 
//    // ˼·��ʹ���������飬һ��˳��һ�������¼�ַ���һ�γ��ֵ�λ�á�
//    // ���ͬʱ�������������飬�õ����ֵ���ɣ�Ĭ��ֵ��-1��
//    // ���ﻹ�����Ż�������ʵ��һ��������㹻�ˣ���Ϊֻ��¼���ֵ��
//    int maxLengthBetweenEqualCharacters(string s) {
//        int m = s.size();
//        vector<int> v1(m, 500); // ��ΪҪ����s�е�һ���ַ���������Ҫ�ر�����Ĭ��ֵ��
//        vector<int> v2(m);
//        for (int i = 0; i < m; i++) {
//            int index = s[i] - 'a';
//            if (v1[index] == 500) {
//                v1[index] = i;
//            }
//        }
//        for (int i = m - 1; i >= 0; i--) {
//            int index = s[i] - 'a';
//            if (v2[index] == 0) {
//                v2[index] = i;
//            }
//        }
//
//        int res = -1;
//
//        for (int i = 0; i < 26; i++) {
//            res = max(res, v2[i] - v1[i] - 1);
//        }
//
//        return res;
//    }
//
//    // good��
//    int maxLengthBetweenEqualCharactersP(string s) {
//        int m = s.size();
//        vector<int> arr(26, -1);
//        
//        int res = -1;
//        for (int i = 0; i < s.size(); i++) {
//            int index = s[i] - 'a';
//            if (arr[index] == -1) { // ��һ�γ��ּ�¼�±�
//                arr[index] = i;
//            }
//            else { // �õ�ǰ�ַ����ֵ�����-��һ�γ��ֵ�����-1����¼���ֵ
//                res = max(res, i - arr[index] - 1);
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