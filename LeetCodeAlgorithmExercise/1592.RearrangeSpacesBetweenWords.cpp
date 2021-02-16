//#include<iostream>
//#include<stack>
//#include<sstream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：重新排列text中的空格，要求相邻单词之间的空格数目都 相等 ，并尽可能 最大化 
//    // 思路：遍历一遍text，计算空格的数量并把单词分割得到字符串数组
//    // 遍历一遍字符串数组，进行拼接。在每一组后加上（空格数/(字符串数组长度-1)）个空格，需要排除最后一个字符串的情况
//    // 最后往字符串后面追加（空格数%(字符串数组长度-1)）个空格
//    string reorderSpaces(string text) {
//        int spaceCount = 0, letterCount = 0, m = text.size();
//        for (int i = 0; i < m; i++) {
//            if (text[i] == ' ') {
//                spaceCount++;
//            }
//            if (text[i] != ' ' && ((i == m - 1) || (text[i + 1] == ' '))) {
//                letterCount++;
//            }
//        }
//
//        // 没有空格直接返回
//        if (spaceCount == 0) {
//            return text;
//        }
//        // 单词个数等于1就不加入空格
//        int size = (letterCount == 1) ? 0 : (spaceCount / (letterCount - 1));
//        string res, space(size, ' ');
//
//        for (int i = 0, count = letterCount; i < m; i++) {
//            // 跳过所有空白格
//            while (i < m && text[i] == ' ') i++;
//            // 往res中追加字符
//            while (i < m && text[i] != ' ') {
//                res.push_back(text[i]);
//                i++;
//            }
//            count--;
//            if (count > 0) {
//                res.append(space);
//            }
//        }
//
//        // 加入所有空格
//        res.append(string((letterCount == 1) ? spaceCount : spaceCount % (letterCount - 1), ' '));
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}