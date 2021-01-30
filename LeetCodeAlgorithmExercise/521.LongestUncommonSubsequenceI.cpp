//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：寻找a和b的最长子序列的长度
//    // 思路：其实是脑筋急转弯。只是单独寻找a的最长子序列和b的最长子序列，只要a和b不相等，就跟ab没有任何关系
//    // 而一个字符串的最长子序列其实就是自己本身。所以返回a和b长度的最大值即可
//    int findLUSlength(string a, string b) {
//        if (a == b) {
//            return -1;
//        }
//
//        return max(a.size(), b.size());
//    }
//};
//
//int main() {
//	return 0;
//}