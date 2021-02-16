//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给你一个整数 n，请你每隔三位添加点（即 "." 符号）作为千位分隔符，并将结果以字符串格式返回。
//    // 思路：遍历n，把每一位转char放入string，每三位多加一个.
//    // return前先判断最后一位是否为.,是就pop,然后再反转，最后return
//    // 注意！0 <= n < 2^31，所以得特殊处理n==0的情况！！
//    string thousandSeparator(int n) {
//        if (n == 0) {
//            return "0";
//        }
//        string res;
//
//        for (int i = 0; n; i++, n /= 10) {
//            res.push_back(n % 10 + '0');
//            if ((i + 1) % 3 == 0) {
//                res.push_back('.');
//            }
//        }
//        if (res[res.size() - 1] == '.') {
//            res.pop_back();
//        }
//
//        reverse(res.begin(), res.end());
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}