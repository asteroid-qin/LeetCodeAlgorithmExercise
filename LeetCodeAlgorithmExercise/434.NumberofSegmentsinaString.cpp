//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�һ���ַ������ж��ٸ�����
//    // ˼·����һ��whileѭ���㶨��ֻҪ�����������ַ�ֻ����һ�μ���
//	  
		/*
		* �ٷ�˼·��
		* ���㵥�ʵ��������͵�ͬ�ڼ������ʿ�ʼ���±������
		* ��ˣ�ֻ��Ҫ������±���������Ϳ��Ա��������ַ��������ÿ���±ꡣ
		* �������£������±�ǰΪ�ո񣨻���Ϊ��ʼ�±꣩��������Ϊ�ո�����Ϊ���ʿ�ʼ���±�
		*/
//    int countSegments(string s) {
//        int result = 0;
//        int i = 0;
//        while (i < s.size()) {
//            bool hasChar = false;
//            // �����ַ�����Ϊ�ַ�ֻӦ�ü���һ��
//            while (i < s.size() && s[i] != ' ') {
//                i++;
//                hasChar = true;
//            }
//
//            result += hasChar;
//            i++;
//        }
//
//        return result;
//    }
//};
//
//int main() {
//
//    string s;
//
//    cout << "������磡" << endl;
//    cout << s << endl;
//    cout << s.size() << endl;
//    cout << s << endl;
//
//	return 0;
//}