//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ؿ���ͨ���ָ�õ���ƽ���ַ����� �������(�����ܣ��ָ�ɾ����ܶ��ƽ���ַ�����) ��
//    // ˼·������s�������һ��ƽ���ַ�����Ҫ�и�Ļ������ǰ��L��count++����Ȼ��count--.ֻҪcount==0
//    // �ʹ�����Դ���㿪ʼ�и�res++
//    // ����ֻҪ�������s����count++����--����count==0�Ĵ�������
//    int balancedStringSplit(string s) {
//        int res = 0, count = 0;
//
//        for (auto& c : s) {
//            if (c == 'L') {
//                count++;
//            }
//            else {
//                count--;
//            }
//
//            if (count == 0) {
//                res++;
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