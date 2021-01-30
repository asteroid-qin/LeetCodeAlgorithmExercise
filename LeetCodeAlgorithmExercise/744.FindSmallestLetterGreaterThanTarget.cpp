//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：在char数组中寻找比target大但在letters中最小的字符（注意！！letter是排好序的）
//    // 思路：太简单了。。直接从左往右for循环即可。
//    // 线性太慢了，再升级一下子，使用二分法
//    char nextGreatestLetter(vector<char>& letters, char target) {
//        for (auto c : letters) {
//            if (c > target) {
//                return c;
//            }
//        }
//
//        // 根据题意默认返回第一个字符（找不到
//        return letters[0];
//    }
//	  // 二分
//    char nextGreatestLetterP(vector<char>& letters, char target) {
//        int i = 0, j = letters.size() - 1, mid;
//
//        while (i < j) {
//            mid = (i + j) / 2;
//
//            if (target >= letters[mid]) {
//                i = mid + 1;
//            }
//            else{
//                j = mid;
//            }
//        }
//
//        return letters[j] > target ? letters[j] : letters[0];
//    }
//
//
//};
//
//int main() {
//    Solution s;
//
//    vector<char> test = { 'c', 'f', 'j' };
//    s.nextGreatestLetterP(test, 'k');
//
//	return 0;
//}