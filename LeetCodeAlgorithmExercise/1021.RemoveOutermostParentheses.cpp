//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������������
//    // ˼·����һ������count��¼��ǰ���ŵĶ�������������++������)��--
//    // ����������Ͻ��з������ۣ�
//    // �����ǰ�ǣ�����ôcountֻҪ������0����ô������ž��ڲ����Ҫƴ�ӣ�Ȼ��count++
//    // �����ǰ�ǣ�����ô��count--������һ�����ţ�����֮�����count������0����ô������Ͳ��������ģ�����ƴ��
//    // ���������˼·������һ��S��ƴ���ַ�������󷵻ؽ������
//    string removeOuterParentheses(string S) {
//        string res;
//
//        int count = 0;
//        for (auto& c : S) {
//            if (c == '(') {
//                if (count++) {
//                    res += c;
//                }
//            }
//            else {
//                if (--count) {
//                    res += c;
//                }
//            }
//        }
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}