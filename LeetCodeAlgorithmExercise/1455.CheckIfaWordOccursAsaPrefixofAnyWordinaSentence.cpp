//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：sentence可以化作字符串数组，按照顺序返回第一个以searchWord为前缀的字符串的下标+1
//    // 找不到返回-1
//    // 思路：首先把sentence转成字符串数组，然后遍历这个数组，尝试用searchWord匹配前缀。如果匹配成功return i+1
//    // 默认返回-1
//    // 当然，如果转字符串数组的话，会浪费一定的空间..所以这题可以想想能不能在sentence上直接操作...
//    // 答案是：当然可以，直接调用api尝试find searchWord
//    // 首先要找到，再判断pos-1指向的字符是否等于空格，如果是就break，否则一直找...
//    // while循环结束后，判断pos是否找到了，找到了就从0遍历到pos，计算有多少个空格就代表当前是第几个单词，最后返回即可
//    int isPrefixOfWord(string sentence, string searchWord) {
//        int pos = sentence.find(searchWord);
//        while (pos != string::npos) {
//            if (pos == 0 || sentence[pos - 1] == ' ') {
//                break;
//            }
//            pos = sentence.find(searchWord, pos + searchWord.size());
//        }
//
//        int count = 1;
//        if (pos != string::npos) {
//            for (int i = 0; i < pos; i++) {
//                if (sentence[i] == ' ') {
//                    count++;
//                }
//            }
//
//            return count;
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//    return 0;
//}