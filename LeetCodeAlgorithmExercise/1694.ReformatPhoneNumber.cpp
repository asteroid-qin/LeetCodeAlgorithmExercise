//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：按照制定规则格式化字符串
//    // 思路：遍历一遍number，进行拼串得到s，只取数字字符。
//    // 遍历一遍s，如果剩下字符小于等于4，就break。不然就一直往后追加，每三次就多加一个-
//    // 怎么感觉这代码写的又臭又长...
//    string reformatNumber(string number) {
//        string s;
//        for (auto& c : number) {
//            if (c - '0' >= 0 && c - '0' <= 9) {
//                s.push_back(c);
//            }
//        }
//
//        string res;
//        int i = 0, m = s.size();
//        while (i < m - 4) {
//            for (int j = 0; j < 3; j++, i++) {
//                res.push_back(s[i]);
//            }
//            res.push_back('-');
//        }
//
//        if (m - i == 4) {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//            res.push_back('-');
//            res.push_back(s[i + 2]);
//            res.push_back(s[i + 3]);
//        }
//        else if (m - i == 2) {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//        }
//        else {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//            res.push_back(s[i + 2]);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}