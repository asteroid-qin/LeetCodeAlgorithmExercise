//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������ĸ������ӳ��
//    // ˼·�����Խ�ȡ��ĸ�������ַ���ƴ������Ȼ�����s
//    // ���õ���ǰ�±���ַ���Ȼ���Ի�ȡ+2�±���ַ��������ȡ�����Ҹ��ַ�����#
//    // �ʹ���ǰ�ַ�����һ���ַ����Թ���һ����������ת������ĸ
//    // Ĭ���õ�ǰ�ַ��õ���ĸ��Ȼ��׷�ӵ�res��
//    string freqAlphabets(string s) {
//        string res;
//
//        for (int i = 0; i < s.size(); i++) {
//            int val = s[i] - '0';
//
//            if (i + 2 < s.size() && s[i + 2] == '#') {
//                val = val * 10 + s[i + 1] - '0';
//                i += 2;
//            }
//
//            res.push_back(val - 1 + 'a');
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}