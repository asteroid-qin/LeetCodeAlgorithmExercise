//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 很简单的小问题
//    int titleToNumber(string s) {
//        // 记录结果
//        int result = 0;
//
//        // 记录长度
//        int length = s.size();
//
//        // 需要遍历这个字符串(从低位到高位)
//        for (int i = length - 1; i >= 0; i--) {
//            // 拿到每一册的字符然后转成数字
//            result += (s[i] - 64) * pow(26, length - 1 - i);
//        }
//
//
//        return result;
//    }
//};
//
//int main() {
//    Solution s;
//    int r = s.titleToNumber("ZY");
//
//    cout << r << endl;
//	return 0;
//}