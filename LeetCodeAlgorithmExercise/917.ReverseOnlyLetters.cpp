//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ֻ��ת�ַ���S�е���ĸ��
//    // ˼·��˫ָ�룬һ����ͷ��һ����β����ÿ��ָ�붼ָ����ĸ��Ȼ�󽻻����ɡ�
//    string reverseOnlyLetters(string S) {
//        int i = 0, j = S.size() - 1;
//
//        while (i < j) {
//            if (!isalpha(S[i])) {
//                i++;
//            }
//            else if (!isalpha(S[j])) {
//                j--;
//            }
//            else {
//                swap(S[i++], S[j--]);
//            }
//        }
//
//        return S;
//    }
//};
//
//int main() {
//
//}