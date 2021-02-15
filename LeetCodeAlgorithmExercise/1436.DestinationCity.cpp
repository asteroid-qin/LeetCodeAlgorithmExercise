//#include<iostream>
//#include<vector>
//#include<unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找出在paths[i][0]未出现，并且只在paths[i][0]出现的字符串
//    // 思路：遍历一遍path把paths[i][0]放入set中，在遍历一遍path，如果当前字符串在set中找不到就直接返回
//    string destCity(vector<vector<string>>& paths) {
//        unordered_set<string> set;
//
//        for (auto& v : paths) {
//            set.insert(v[0]);
//        }
//        for (auto& v : paths) {
//            if (!set.count(v[1])) {
//                return v[1];
//            }
//        }
//
//        return "";
//    }
//
//};
//int main() {
//	return 0;
//}