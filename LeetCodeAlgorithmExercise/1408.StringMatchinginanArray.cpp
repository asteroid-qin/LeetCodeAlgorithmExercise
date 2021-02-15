//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：任意 顺序返回 words 中是其他单词的子字符串的所有单词。（如["mass","as"],就返回["as"]）
//    // 思路：遍历一遍words，把里面所有单词进行拼串得到一个大的字符串。然后再遍历words，
//    // 如果当前字符串能够在大的字符串匹配超过两次，那么就把当前字符串放入res中
//    // 注意！为了防止两个单词进行连接，中间需要放特殊字符来隔开
//    vector<string> stringMatching(vector<string>& words) {
//        vector<string> res;
//        string buck;
//        for (string& s : words){
//            buck.append(s + ",");
//        }
//
//        for (string& s : words) {
//            int pos = buck.find(s);
//            if (buck.find(s, pos + s.size()) != string::npos) {
//                res.push_back(s);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//
//	return 0;
//}