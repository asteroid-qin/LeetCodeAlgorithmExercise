//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж��ַ���s���Ƿ������һ��A�������������������L
//    // ˼·���������s����һ�������жϼ�¼A�Ƿ���ֹ�����һ�γ�����Ϊtrue���ڶ���ֱ�ӷ���false
//    // ����һ��������¼L�������ֵĴ�������������3��ʱ������false
//    bool checkRecord(string s) {
//        bool aExit = false;
//        int lNum = 0;
//
//        for (int i = 0; i < s.size(); i++) {
//            if (s[i] == 'A') {
//                if (aExit) {
//                    return false;
//                }
//     
//                aExit = true;
//            }
//            else if (s[i] == 'L') {
//                lNum++;
//
//                if (lNum > 2) {
//                    return false;
//                }
//
//                continue;
//            }
//            // ���û���������Ͱ�L����������Ϊ0
//            lNum = 0;
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}