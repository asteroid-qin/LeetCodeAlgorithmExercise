//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算s中，特殊子序列（有同数量的1和0）出现的次数之和
//    // 思路：分组！ "00110011"->"00 11 00 11",标号从1到4.
//    // 1-2相邻，有两种：01、0011
//    // 2-3相邻，有两种：10、1100
//    // 3-4相邻，有两种：01、0011
//    // 发现其实可以把这个字符串简化成：2222，00110011和11001100结果并无区别。关键是相邻最多能够匹配的对数
//    // 从左往右求当前数和后一个数的最小值即刻。最小值和其实就是匹配的对数和
//    int countBinarySubstrings(string s) {
//        int res = 0,pre = 0, m = s.size(), i = 0;
//        int count;
//        while (i < m) {
//            count = 0;
//            char c = s[i];
//
//            while (i < m && s[i] == c) {
//                count++;
//                i++;
//            }
//            
//            res += min(pre, count);
//            pre = count;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}