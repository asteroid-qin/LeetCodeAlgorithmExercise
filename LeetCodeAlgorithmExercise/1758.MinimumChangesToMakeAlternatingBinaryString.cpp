//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：生成交替二进制字符串的最少操作数
//    // 思路：有两种可能：以1开头和以0开头
//    // 所以用两个变量记录以1开头需要的操作数和以0开头需要的操作数。最后返回两者中的最小值即可
//    int minOperations(string s) {
//        int one = 0, zero = 0;
//        for (int i = 0; i < s.size(); i+=2) {
//            if (s[i] == '1') {
//                zero++;
//            }
//            else {
//                one++;
//            }
//
//            if (i + 1 < s.size()) {
//                if (s[i + 1] == '1') {
//                    one++;
//                }
//                else {
//                    zero++;
//                }
//            }
//        }
//
//        return min(one, zero);
//    }
//
//};
//
//int main() {
//	return 0;
//}