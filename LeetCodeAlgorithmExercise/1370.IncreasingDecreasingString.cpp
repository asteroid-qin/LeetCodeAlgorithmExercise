//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：上升下降字符串
//    // 思路：描述虽然长，但是理解后还是比较简单的：拼接字符串而已
//        
//    // 首先把s转成26的数组，值是数字的大小。
//    // 然后先小到大遍历，遇到0就跳
//    // 找到不属于0的，先--，然后把当前字符放在结果字符串res的末尾
//    // 然后再从大到小遍历，和上面一样，找到值不为0的先--，再把不等于0的字符加在res的尾部
//    // 最后只要res的长度等于s就可以退出（字符都选完了.）
//    string sortString(string s) {
//        string res;
//        int arr[26] = { 0 };
//        for (auto& c : s) {
//            arr[c - 'a']++;
//        }
//
//        while (res.size() != s.size()) {
//            for (int i = 0; i < 26; i++) {
//                if (arr[i] == 0) continue;
//                res.push_back(i + 'a');
//                arr[i]--;
//            }
//            for (int i = 25; i >= 0; i--) {
//                if (arr[i] == 0) continue;
//                res.push_back(i + 'a');
//                arr[i]--;
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