//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺���ɽ���������ַ��������ٲ�����
//    // ˼·�������ֿ��ܣ���1��ͷ����0��ͷ
//    // ����������������¼��1��ͷ��Ҫ�Ĳ���������0��ͷ��Ҫ�Ĳ���������󷵻������е���Сֵ����
//    int minOperations(string s) {
//        int one = 0, zero = 0;
//        for (int i = 0; i < s.size(); i+=2) {
//            if (s[i] == '1') {
//                zero++;
//            }
//            else {
//                one++;
//            }
//
//            if (i + 1 < s.size()) {
//                if (s[i + 1] == '1') {
//                    one++;
//                }
//                else {
//                    zero++;
//                }
//            }
//        }
//
//        return min(one, zero);
//    }
//
//};
//
//int main() {
//	return 0;
//}