//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回s中字符连续出现3次及以上的下标【开始，结束】，因为可能存在多个，所以返回二维数组
//    // 思路：记录初始下标、当前字符、出现次数。如果次数大于等于3那么就把初始下标和当前下标记录即可
//    vector<vector<int>> largeGroupPositions(string s) {
//        vector<vector<int>> res;
//        int i = 0, j = 0;
//
//        while (j < s.size()) {
//            char c = s[j];
//            int count = 1;
//
//            while (j + 1 < s.size() && s[j + 1] == c) {
//                count++;
//                j++;
//            }
//
//            if (count > 2) {
//                res.push_back({i, j});
//            }
//
//            j++;
//            i = j;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//
//    Solution s;
//    s.largeGroupPositions("abcd");
//	return 0;
//}