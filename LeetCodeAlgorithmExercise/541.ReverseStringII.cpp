//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    //  目标直接看翻译：
//    //  给定一个字符串 s 和一个整数 k，你需要对从字符串开头算起的每隔 2k 个字符的前 k 个字符进行反转。
//    //  如果剩余字符少于 k 个，则将剩余字符全部反转。
//    //  如果剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符，其余字符保持原样。
//    // 思路：一个for循环，使用双指针反转指针。
//    // 如果剩余字符小于k，那一个遍历剩余字符，不然就是遍历前k个字符。只要让右指针去其中最小值即可
//    string reverseStr(string s, int k) {
//        for (int start = 0; start < s.size(); start += k * 2) {
//            int i = start, j = (start + k - 1)>(s.size() - 1)? (s.size() - 1) :(start + k - 1);
//            while (i < j) {
//                swap(s[i++], s[j--]);
//            }
//        }
//
//        return s;
//    }
//
//
//};
//
//int main() {
//	return 0;
//}