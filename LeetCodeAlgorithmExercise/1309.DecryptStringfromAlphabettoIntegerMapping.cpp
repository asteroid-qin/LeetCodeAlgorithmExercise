//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：解码字母到整数映射
//    // 思路：尝试截取字母（采用字符串拼串）。然后遍历s
//    // 先拿到当前下标的字符，然后尝试获取+2下标的字符，如果能取到并且该字符等于#
//    // 就代表当前字符和下一个字符可以构成一个整数最终转换成字母
//    // 默认用当前字符得到字母，然后追加到res上
//    string freqAlphabets(string s) {
//        string res;
//
//        for (int i = 0; i < s.size(); i++) {
//            int val = s[i] - '0';
//
//            if (i + 2 < s.size() && s[i + 2] == '#') {
//                val = val * 10 + s[i + 1] - '0';
//                i += 2;
//            }
//
//            res.push_back(val - 1 + 'a');
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}