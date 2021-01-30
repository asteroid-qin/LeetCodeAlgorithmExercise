//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//
//    // 目标：找出最短补全词，太长了这里就懒得概括了，反正理解起来很简单，做起来也非常轻松
//    // 思路：利用map，先把licensePlate做成映射，再遍历words，把里面每一个string先处理成map，然后同时遍历
//    // licenseplate和string的映射表，如果小于0就直接跳出循环，否则就判断这个string的大小是否比之前的小，
//    // 小的话就更新最短补全词和最小长度。最后返回最短补全词
//    string shortestCompletingWord(string licensePlate, vector<string>& words) {
//        int l[26] = { 0 };
//        for (auto c : licensePlate) {
//            if (isalpha(c)) {
//                l[toupper(c) - 'A']++;
//            }
//        }
//
//        string res;
//        int size = INT_MAX;
//        for (auto str : words) {
//            int w[26] = { 0 };
//
//            for (char c : str) {
//                w[toupper(c) - 'A']++;
//            }
//
//            for (int i = 0; i < 26; i++) {
//                if (w[i] - l[i] < 0) {
//                    goto to;
//                }
//            }
//
//            if (str.size() < size) {
//                res = str;
//                size = str.size();
//            }
//
//        to:;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}