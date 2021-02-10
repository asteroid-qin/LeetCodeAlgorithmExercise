//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：只反转字符串S中的字母。
//    // 思路：双指针，一个从头，一个从尾，让每个指针都指向字母，然后交换即可。
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