//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：判断一个字符串中有多少个单词
//    // 思路：用一个while循环搞定，只要连接起来的字符只计算一次即可
//	  
		/*
		* 官方思路：
		* 计算单词的数量，就等同于计数单词开始的下标个数。
		* 因此，只需要定义好下标的条件，就可以遍历整个字符串，检测每个下标。
		* 定义如下：若该下标前为空格（或者为初始下标），且自身不为空格，则其为单词开始的下标
		*/
//    int countSegments(string s) {
//        int result = 0;
//        int i = 0;
//        while (i < s.size()) {
//            bool hasChar = false;
//            // 跳过字符，因为字符只应该计算一次
//            while (i < s.size() && s[i] != ' ') {
//                i++;
//                hasChar = true;
//            }
//
//            result += hasChar;
//            i++;
//        }
//
//        return result;
//    }
//};
//
//int main() {
//
//    string s;
//
//    cout << "你好世界！" << endl;
//    cout << s << endl;
//    cout << s.size() << endl;
//    cout << s << endl;
//
//	return 0;
//}