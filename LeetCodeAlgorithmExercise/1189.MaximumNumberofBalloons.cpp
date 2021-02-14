//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：遍历text，尝试拼出"balloon"，返回最大数量
//    // 思路：用数组记录balloon中五个字符的数量，先求ban中的最小值，再求lo的最小值
//    // 最后返回ban中最小值和lo的最小值/2中的最小值
//    int maxNumberOfBalloons(string text) {
//        int arr[26] = { 0 };
//
//        for (auto& c : text) {
//            arr[c - 'a']++;
//        }
//
//        int sig = min( min(arr[0], arr[1]), arr[13]);
//        int dou = min(arr[11], arr[14]);
//
//        return min(sig, dou / 2);
//    }
//};
//
//int main() {
//	return 0;
//}