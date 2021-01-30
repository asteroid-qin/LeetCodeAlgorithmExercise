//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断字符串s，是否最多有一个A并且最多有两个连续的L
//    // 思路：遍历这个s，用一个变量判断记录A是否出现过，第一次出现设为true，第二次直接返回false
//    // 再用一个变量记录L连续出现的次数，连续出现3次时，返回false
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
//            // 如果没有连续，就把L的数量重置为0
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