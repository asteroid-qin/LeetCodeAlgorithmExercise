//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：jewels中每个字符为特殊字符，求stonees里面特殊字符的数量
//    // 思路：把jewels转成map（根据题意，这里可以使用int数组），遍历stones
//    // 对每一个字符在map查，存在就count++，最后返回count即可
//    int numJewelsInStones(string jewels, string stones) {
//        int a[128] = { 0 };
//        for (char c : jewels) {
//            a[c - 'A']++;
//        }
//
//        int res = 0;
//        for (char c : stones) {
//            if (a[c - 'A'] != 0) {
//                res++;
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}