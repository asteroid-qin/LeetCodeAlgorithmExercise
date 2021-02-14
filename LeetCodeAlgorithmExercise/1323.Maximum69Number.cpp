//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个仅由数字 6 和 9 组成的正整数 num。
//    // 你最多只能翻转一位数字，将 6 变成 9，或者把 9 变成 6 。
//    // 请返回你可以得到的最大数字。
//    // 从前往后遍历，找到第一个6然后把它改成9即可。
//    // 因为是从前后遍历，所以可以把int转string，用find去查第一个6，查到就了改，改完后转int再返回
//    // 没查到就返回本身
//    int maximum69Number(int num) {
//        string s = to_string(num);
//
//        int pos = s.find('6');
//        if (pos != string::npos) {
//            s[pos] = '9';
//            return stoi(s);
//        }
//
//        return num;
//    }
//};
//
//int main() {
//	return 0;
//}