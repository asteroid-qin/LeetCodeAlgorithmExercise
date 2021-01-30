//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出S中每个字符到字符C的最短距离
//    // 思路：先从0开始，往后找字符，用pre记录上一个C出现的下标，并设置当前字符为pre-i。也就是距离上一次出现字符的距离
//    // 然后再来一把，从后往前找，用last记录上一次C出现的小标，并设置当前字符为last-i。也就是距离上一次出现字符的距离
//    // 很明显，每一个字符到字符C的最短距离，就是两次计算的得到距离的最小值
//    vector<int> shortestToChar(string S, char C) {
//        vector<int> res(S.size());
//
//        int pre = -100000;
//        for (int i = 0; i < S.size(); i++) {
//            if (S[i] == C) pre = i;
//            res[i] = i - pre;
//        }
//
//        int last = 100000;
//        for (int i = S.size() - 1; i >= 0; i--) {
//            if (S[i] == C) last = i;
//            res[i] = min(res[i], last - i);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}