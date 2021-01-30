//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：t是s的随机重新排列再添加一个字符得到的字符串，求这个新添加的字符
//    // 约束条件：两个字符串只包含小写字母，0 <= s.length <= 1000，t.length == s.length + 1
//    // 思路：使用map记录两个字符串每个字母出现的次数，通过遍历t，判断每个字符对应的值是否相等
//    // 不相等就是这个字符
//    // 然后上面是方法1，其实还有方法2：直接只用一个变量记录ASCII值，把t的值减去s的值就是结果
//    // 最爽的就是方法3，使用异或。其实这种找不同的问题最应该先想到的就是异或
//    char findTheDifference(string s, string t) {
//        // 根据条件，这里依然可以使用数组来代替map
//        int sMap[26] = { 0 };
//        int tMap[26] = { 0 };
//
//        // 往里面放入值
//        for (auto i : s) sMap[i - 'a']++;
//        for (auto i : t) tMap[i - 'a']++;
//
//        // 同时遍历这两个数组
//        for (int i = 0; i < 26; i++) {
//            // 如果值不等于，就返回这个字符
//            if (sMap[i] != tMap[i]) {
//                return i + 'a';
//            }
//        }
//
//        return ' ';
//    }
//
//    // 使用异或
//    char findTheDifference(string s, string t) {
//        char c = 0;
//
//        for (auto i : s + t) {
//            c ^= i;
//        }
//
//        return c;
//    }
//};
//
//int main() {
//	return 0;
//}