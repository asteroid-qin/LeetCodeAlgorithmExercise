//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 给定一个字符串判断它是否是回文...
//    // 很简单，把它先遍历一次，去掉特殊字符只留下英文字母并全转成大写
//    // 然后按照回文对折，前后比较就行。方法可行，但是不是一个最简单方法。
//    // 可以直接使用两个指针，一个向右、向左比较判断即可
//    bool isPalindrome(string s) {
//        int n = s.size();
//        int left = 0, right = n - 1;
//        while (left < right) {
//            // isalnum这个函数有点东西
//            while (left < right && !isalnum(s[left])) {
//                ++left;
//            }
//            while (left < right && !isalnum(s[right])) {
//                --right;
//            }
//            if (left < right) {
//                if (tolower(s[left]) != tolower(s[right])) {
//                    return false;
//                }
//                ++left;
//                --right;
//            }
//        }
//        return true;
//    }
//
//   
//
//};
//
//// 测试
//int main() {
//    Solution s;
//    bool isP = s.isPalindrome("0P");
//
//
//    cout << "结果如何？" << isP << endl;
//  
//	return 0;
//}