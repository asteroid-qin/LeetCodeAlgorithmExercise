//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：text由小写字母和空格组成，要求返回first second ？，求这两个字符串后面连续的单词，并且
//    // 如果first second多次出现，那后面的单词都要放入vector中
//    // 思路：先把text里面所有的单词都提取出来，得到一个string数组。
//    // 然后遍历这个string，判断当前string是否等于first，如果等于，先判断后面是否至少存在两个字符
//    // 不存在就return，存在就判断后一个位置是否等于second，如果等于就把第三个位置的字符放到res中，然后继续执行
//    vector<string> findOcurrences(string text, string first, string second) {
//        vector<string> textArr = getV(text);
//        vector<string> res;
//
//        for (int i = 0; i + 2 < textArr.size(); i++) { // +2保证至少预留两个位置
//            if (textArr[i] == first && textArr[i+1] == second) {
//                res.push_back(textArr[i + 2]);
//                i++;
//            }
//        }
//
//        return res;
//    }
//
//    vector<string> getV(string text){
//         vector<string> textArr;
//
//         string s;
//         for (int i = 0; i < text.size();i++) {
//             if (text[i] != ' ') {
//                 s += text[i];
//             }
//             else {
//                 textArr.push_back(s);
//                 s.clear();
//             }
//         }
//
//         textArr.push_back(s);
//
//         return textArr;
//    }
//};
//
//int main() {
//	return 0;
//}