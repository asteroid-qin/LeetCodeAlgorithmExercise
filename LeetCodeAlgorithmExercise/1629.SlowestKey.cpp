//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：请返回按键 持续时间最长 的键，如果有多个这样的键，则返回 按字母顺序排列最大 的那个键
//    // 思路：同时遍历releaseTimes，keysPressed。用26长度的数组记录每个字符的持续时间（只要最大值）
//    // 最后遍历这个数组，求持续时间最长time和字符c。当当前值大于等于time，更新time和c
//    // 当然！这个过程可以同时进行！！
//    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
//        int arr[26] = { 0 };
//        for (int i = 0; i < releaseTimes.size(); i++) {
//            int index = keysPressed[i] - 'a';
//            if (i == 0) {
//                arr[index] = releaseTimes[i];
//            }
//            else {
//                arr[index] = max(arr[index],releaseTimes[i] - releaseTimes[i-1]);
//            }
//        }
//
//        char c = 'a';
//        for (int i = 0, time = 0; i < 26; i++) {
//            if (time <= arr[i]) {
//                time = arr[i];
//                c = i + 'a';
//            }
//        }
//
//        return c;
//    }
//
//    // 时间复杂度：O(n)，空间复杂度：O(1)
//    char slowestKeyP(vector<int>& releaseTimes, string keysPressed) {
//        char res = keysPressed[0];
//
//        for (int i = 1, time = releaseTimes[0]; i < releaseTimes.size(); i++) {
//            int val = releaseTimes[i] - releaseTimes[i - 1];
//            if (time < val) {
//                time = val;
//                res = keysPressed[i];
//            }
//            else if (time == val) {
//                res = max(res, keysPressed[i]);
//            }
//
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}