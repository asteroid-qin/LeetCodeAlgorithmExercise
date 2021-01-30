//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：输入两个字符，判断s是否跟t有字母异位的关系
//    // 思路：首先s和t的长度得一样长，然后需要判断s和t中每个字符的个数
//    // 可以使用数组存放s中每个字符对应的数量，在遍历t，把每个字符的数量再减1
//    // 最后遍历一次数组，看看是否每一位上的值都等于0即可
//    // 做之前秒了一下官方解，发现最佳写法就是我想的这样！
//    bool isAnagram(string s, string t) {
//        // 注意！！一定要排除两个不相等的情况
//        if (s.size() != t.size()) {
//            return false;
//        }
//        // 注意！题目说了，两个字符串仅由26个小写字母构成
//        vector<int> v(26,0);
//
//        // 开始往v里面放
//        for (auto i : s) {
//            v[i - 'a']++;
//        }
//
//        for (auto i : t) {
//            v[i - 'a']--;
//            if (v[i - 'a'] < 0) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}