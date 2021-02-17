//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断 数组表示的字符串 是否相等
//    // 思路：最简单就是拼接word1和word2的字符串，return 两个字符是否相等即可
//    // 不然得用四指针...
//    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
//        string s1, s2;
//        for (string& s : word1) {
//            s1.append(s);
//        }
//        for (string& s : word2) {
//            s2.append(s);
//        }
//
//        return s1 == s2;
//    }
//};
//
//int main() {
//	return 0;
//}