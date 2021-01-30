//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：把一个数转成7进制字符串
//    // 思路：按照公式即可！
//    string convertToBase7(int num) {
//        // 需要处理0这一特殊情况
//        if (!num) {
//            return "0";
//        }
//
//        string res;
//        int temp = abs(num);
//
//        while (temp != 0) {
//            // 在把余数转成string后，往res后面追加即可
//            res.push_back(temp % 7 + '0');
//            temp /= 7;
//        }
//       
//        // 注意！负数需要在前面加上一个负号
//        if (num < 0) {
//            res.push_back('-');
//        }
//
//        // 最后再反转
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};
//
//int main() {
//    Solution s;
//    cout << s.convertToBase7(-7) << endl;
//
//    string str;
//    str.push_back((char)(1 + '0'));
//    cout << str << endl;
//
//	return 0;
//}