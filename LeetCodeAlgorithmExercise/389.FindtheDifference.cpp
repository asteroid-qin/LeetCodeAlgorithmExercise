//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺t��s������������������һ���ַ��õ����ַ��������������ӵ��ַ�
//    // Լ�������������ַ���ֻ����Сд��ĸ��0 <= s.length <= 1000��t.length == s.length + 1
//    // ˼·��ʹ��map��¼�����ַ���ÿ����ĸ���ֵĴ�����ͨ������t���ж�ÿ���ַ���Ӧ��ֵ�Ƿ����
//    // ����Ⱦ�������ַ�
//    // Ȼ�������Ƿ���1����ʵ���з���2��ֱ��ֻ��һ��������¼ASCIIֵ����t��ֵ��ȥs��ֵ���ǽ��
//    // ��ˬ�ľ��Ƿ���3��ʹ�������ʵ�����Ҳ�ͬ��������Ӧ�����뵽�ľ������
//    char findTheDifference(string s, string t) {
//        // ����������������Ȼ����ʹ������������map
//        int sMap[26] = { 0 };
//        int tMap[26] = { 0 };
//
//        // ���������ֵ
//        for (auto i : s) sMap[i - 'a']++;
//        for (auto i : t) tMap[i - 'a']++;
//
//        // ͬʱ��������������
//        for (int i = 0; i < 26; i++) {
//            // ���ֵ�����ڣ��ͷ�������ַ�
//            if (sMap[i] != tMap[i]) {
//                return i + 'a';
//            }
//        }
//
//        return ' ';
//    }
//
//    // ʹ�����
//    char findTheDifference(string s, string t) {
//        char c = 0;
//
//        for (auto i : s + t) {
//            c ^= i;
//        }
//
//        return c;
//    }
//};
//
//int main() {
//	return 0;
//}