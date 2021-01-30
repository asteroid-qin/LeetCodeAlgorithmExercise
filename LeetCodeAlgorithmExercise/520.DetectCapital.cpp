//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    /*
//    *   直接看官方解释：
//    *   全部字母都是大写，比如"USA"。
//    *   单词中所有字母都不是大写，比如"leetcode"。
//    *   如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。
//    */
//    // 限制条件：输入是由大写和小写拉丁字母组成的非空单词。
//    // 思路：一个for循环遍历，中间按照条件进行判断即可    
//    bool detectCapitalUse(string word) {
//        // 具体实现：直接去第一个字符，判断是大写还是小写
//        // 如果是大写，那么再判断第二字符。
//        //      如果是大写，那么后面所有的字符都应该大写
//        //      如果是小写，那么后面的字符全应该是小写
//        // 如果是小写，后面的所有字符都应该是小写
//
//        // 处理特殊情况
//        if (word.size() < 2) {
//            return true;
//        }
//       
//        // 按照上面的思想一一实现即可
//        for (int i = 1; i < word.size(); i++) {
//            if (word[0] <= 'Z') {
//                // 首字母大写
//                if (word[1] <= 'Z') {
//                    // 第二个字母大写
//                    if (word[i] > 'Z') {
//                        return false;
//                    }
//                }
//                else {  // 第二个字母小写
//                    if (word[i] <= 'Z') {
//                        return false;
//                    }
//                }
//            }
//            else {
//                if (word[i] <= 'Z') {
//                    return false;
//                }
//            }
//        }
//
//        // 默认返回true
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}