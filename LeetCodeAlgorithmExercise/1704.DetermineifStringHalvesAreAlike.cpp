//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：s长度为偶数，从中间分两半。判断左边元音的个数是否等于右边元音的个数
//    // 思路：用一个变量count记录左右元音的查。遍历到左边时，遇到元音++；右边遇到元音就--。
//    // 最后返回count是否等于0即可
//    bool halvesAreAlike(string s) {
//        int count = 0, i = 0;
//
//        while (i < s.size() / 2) {
//            count += judge(s[i++]);
//        }
//
//        while (i < s.size()) {
//            count -= judge(s[i++]);
//        }
//
//        return !count;
//    }
//
//    bool judge(char c) {
//        c &= 0xdf; // 转大写
//        switch (c) {
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U':
//            return true;
//        }
//
//        return false;
//    }
//
//};
//
//int main() {
//	return 0;
//}