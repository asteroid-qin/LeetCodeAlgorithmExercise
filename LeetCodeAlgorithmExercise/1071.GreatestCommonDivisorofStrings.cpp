//#include<iostream>
//#include <numeric>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回str1和str2中最长的公因子字符串
//    // 思路：官方解1倒是写出来了，无非是从大到小拼串遍历，判断是否是两个字符串的因子。如果同时满足就返回这个字符串
//    // 但是根据官方解2，无需遍历从大小的的因子，直接算str1和str2长度的最大公因子，并从str1或者str2中从0按照这个最大公因子
//    // 进行截取。如果存在，那么这个截取的到的字符串就是答案。
//    // 好蒙，解3就跟蒙了，证明看的迷迷糊糊的，感觉找不着重点。总之会最简单的写法就行了，这些优化可以记住留着以后再慢慢琢磨
//    string gcdOfStrings(string str1, string str2) {
//        // 这里写最完美的解3
//        if (str1 + str2 != str2 + str1) return "";
//        return str1.substr(0, gcd((int)str1.length(), (int)str2.length()));
//    }
//
//    int gcd(int a, int b) { // 碾转相除法
//        return b == 0 ? a : gcd(b, a % b);
//    }
//
//};
//
//int main() {
//    Solution s;
//
//    cout << s.gcd(48,36) << endl;
//
//	return 0;
//}