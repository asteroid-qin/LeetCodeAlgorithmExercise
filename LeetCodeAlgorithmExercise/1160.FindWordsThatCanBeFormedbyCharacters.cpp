//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：尝试用chars中的字符串拼接words里面每一个字符串。拼装同一个字符串时，chars中一个字符只能使用一次
//    // 思路：把chars转成26大小的arr，value为可用字符的数量。
//    // 再遍历words里面每一个单词同样转成arr。
//    // 同时遍历单词arr和字符串arr，如果单词arr的值大于字符串arr就break进入下一轮循环，否则最后把当前单词的长度赋给res
//    int countCharacters(vector<string>& words, string chars) {
//        int arr[26] = { 0 };
//        for (auto c : chars) {
//            arr[c - 'a']++;
//        }
//
//        int res = 0;
//        for (auto s : words) {
//            int sArr[26] = { 0 };
//            for (auto c : s) {
//                sArr[c - 'a']++;
//            }
//
//            if (judge(sArr, arr)) {
//                res += s.size();
//            }
//        }
//
//        return res;
//    }
//
//    bool judge(int* a1, int* a2) {
//        for (int i = 0; i < 26; i++) {
//            if (a1[i] > a2[i]) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//};
//
//int main() {
//	return 0;
//}