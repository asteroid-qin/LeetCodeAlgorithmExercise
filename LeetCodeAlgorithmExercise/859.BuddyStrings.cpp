//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�A�ܷ񽻻������ַ���λ�õõ�B
//    // ˼·������A��B�ĳ��ȱ�����Ȳ��Ҷ���Ϊ�գ�Ȼ��������ۣ�
//    // ���A=B������abcd��abcd��ô���һ����false�����������aab��aab�������ظ���ĸ���������ô����true�����Խ�����
//    // ���A������B����ô��¼�����ڵ��±�ʹ�������������2����false����������0������ȡ�
//    // �������ǹ���(0ms)������д��ʵ��̫�ѿ���...
//    bool buddyStrings(string A, string B) {
//        if (A.size() != B.size() || A.size() == 0 || B.size() == 0) {
//            return false;
//        }
//
//        int count = 0, a = -1, b = -1;
//        for (int i = 0; i < A.size(); i++) {
//            if (A[i] == B[i]) continue;
//
//            count++;
//            // ��¼�����±�
//            if (a == -1) {
//                a = i;
//            }
//            else {
//                b = i;
//            }
//
//            if (count > 2) {
//                return false;
//            }
//        }
//
//        // ���Aǡ�õ���B����ô��Ҫ�ж�A�����Ƿ����ظ�Ԫ��
//        if (count == 0) {
//            int arr[26] = { 0 };
//            for (auto c : A) {
//                if (arr[c - 'a'] != 0) {
//                    return true;
//                }
//                arr[c - 'a']++;
//            }
//
//            return false;
//        }
//        
//            // ��Ȼ���ж��Ƿ����������Խ������ַ�����ǡ��A[a] = B[b] && B[a] == A[b]
//        if (a != -1 && b != -1 && A[a] == B[b] && A[b] == B[a]) {
//            return true;
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}