//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：最长非空子字符串的长度
//    // 思路：res记录结果（最大值），count记录当前字符的长度。遍历一遍s就完事
//    int maxPower(string s) {
//        int res = 0 ,m = s.size();
//
//        for (int i = 0; i < m; i++) {
//            int count = 1;
//            char c = s[i];
//
//            while (i + 1 < m && s[i + 1] == c) {
//                i++;
//                count++;
//            }
//
//            res = max(res, count);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}