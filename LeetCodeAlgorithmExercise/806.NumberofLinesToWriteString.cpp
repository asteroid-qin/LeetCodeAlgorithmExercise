//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����д�ַ�����Ҫ�������������ٶ������ܷ���S���Լ����һ��ʹ�õĿ���Ƕ��ٸ���λ��
//    // ����Ϊ����Ϊ2�������б��ء�
//    // ˼·��ֱ�����Ⱥͣ�Ȼ��/100����кŰ��������ǲ����еġ������ֱ���ڱ����Ĺ����м�����к�
//    // ֱ��һ��forѭ���㶨
//    vector<int> numberOfLines(vector<int>& widths, string s) {
//        int line = 1, wid = 0;
//
//        for (char c : s) {
//            int w = widths[c - 'a'];
//            wid += w;
//            // ע�⣡�����ǲ����Բ�ֵģ�������100����ôӵ�ǰw��ʼ������
//            if (wid > 100) {
//                line++;
//                wid = w;
//            }
//        }
//
//        return { line, wid };
//    }
//};
//
//int main() {
//	return 0;
//}