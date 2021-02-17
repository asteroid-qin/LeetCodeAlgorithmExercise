//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：两个相同字符之间的最长子字符串的长度 
//    // 思路：使用两个数组，一个顺序、一个逆序记录字符第一次出现的位置。
//    // 最后同时遍历这两个数组，拿到最大值即可（默认值：-1）
//    // 这里还可以优化！！其实用一个数组就足够了！因为只记录最大值！
//    int maxLengthBetweenEqualCharacters(string s) {
//        int m = s.size();
//        vector<int> v1(m, 500); // 因为要处理s中第一个字符，所以需要特别设置默认值！
//        vector<int> v2(m);
//        for (int i = 0; i < m; i++) {
//            int index = s[i] - 'a';
//            if (v1[index] == 500) {
//                v1[index] = i;
//            }
//        }
//        for (int i = m - 1; i >= 0; i--) {
//            int index = s[i] - 'a';
//            if (v2[index] == 0) {
//                v2[index] = i;
//            }
//        }
//
//        int res = -1;
//
//        for (int i = 0; i < 26; i++) {
//            res = max(res, v2[i] - v1[i] - 1);
//        }
//
//        return res;
//    }
//
//    // good！
//    int maxLengthBetweenEqualCharactersP(string s) {
//        int m = s.size();
//        vector<int> arr(26, -1);
//        
//        int res = -1;
//        for (int i = 0; i < s.size(); i++) {
//            int index = s[i] - 'a';
//            if (arr[index] == -1) { // 第一次出现记录下标
//                arr[index] = i;
//            }
//            else { // 用当前字符出现的索引-第一次出现的索引-1。记录最大值
//                res = max(res, i - arr[index] - 1);
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}