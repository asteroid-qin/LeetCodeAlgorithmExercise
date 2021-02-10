//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：找到A中每个字符串中都存在的字符，然后把这个重复字符放入数组中输出。如果每个字符串都重复三次，就
//    // 输出三个这样重复的字符
//    // 思路：计数，字符串里的字符都是小写字母。
//    // 准备两个arr数组，一个用来放目前重复字符的个数，一个用来计算当前字符串字符重复的个数。
//    // 每计算完一个字符串中字符串重复的个数，然后再遍历目前重复字符的个数，根据题意取最小值
//    // 遍历完A后，最后遍历一次放目前重复字符个数的数组，并按照字符重复的个数，循环放入结果中。
//    vector<string> commonChars(vector<string>& A) {
//        int m = A.size();
//        int mapC[26] = { 0 };
//
//        for (auto& c : A[0]) {
//            mapC[c - 'a']++;
//        }
//
//        for (int i = 1; i < m; i++) {
//            int now[26] = { 0 };
//
//            for (auto& c : A[i]) {
//                now[c - 'a']++;
//            }
//
//            for (int i = 0; i < 26; i++) {
//                mapC[i] = min(mapC[i], now[i]);
//            }
//        }
//
//        vector<string> res;
//        for (int i = 0; i < 26; i++) {
//            while (mapC[i]--) {
//                res.push_back(string(1, i + 'a'));
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