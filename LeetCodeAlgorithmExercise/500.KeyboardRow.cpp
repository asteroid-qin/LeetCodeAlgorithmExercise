//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词
//    // 限制条件：只包含26个字母
//    // 思路：输入一个字符，判断它是第几行并记录，如果和之前记录的行数不相同，那就返回
//    // 返回空。
//    // 双100%！！！
//    vector<string> findWords(vector<string>& words) {
//        // 创建一个映射表
//        int myLine[26] = { 0 };
//        string line1 = "QWERTYUIOP";
//        string line2 = "ASDFGHJKL";
//        string line3 = "ZXCVBNM";
//        setMap(myLine, line1, line2, line3);
//
//        vector<string> res;
//        // 去string中查
//        for (auto str : words) {
//            int line = -1;
//
//            for (auto c : str) {
//                const char now = toupper(c) - 'A';
//
//                // 注意别忘记转大写！！
//                if (line != -1 && myLine[now] != line) {
//                    goto gothis;
//                }
//                line = myLine[now];
//            }
//
//            res.push_back(str);
//        gothis:;
//        }
//
//        return res;
//    }
//
//    void setMap(int* map, string& line1, string& line2, string& line3) {
//        for (auto c : line1) {
//            map[c - 'A'] = 1;
//        }
//        for (auto c : line2) {
//            map[c - 'A'] = 2;
//        }
//        for (auto c : line3) {
//            map[c - 'A'] = 3;
//        }
//    }
//};
//
//int main() {
//    string s = "asdfg";
//    
//    cout  << s.find('op',-1) << endl;
//
//	return 0;
//}