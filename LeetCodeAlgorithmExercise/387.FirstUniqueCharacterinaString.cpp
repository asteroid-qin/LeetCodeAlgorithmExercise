//#include<iostream>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//	// 目标：找出第一个不重复的字符
//	// 约束条件：字符串中只有小写字母
//	// 思路：使用hash记录每个字母出现的个数，再从前往后遍历这个字符串，找到第一个value为1的字符并返回当前的索引
//	int firstUniqChar(string s) {
//		// 因为只包含26个x小写字母，所以这里可以使用数组代替hashmap
//		int sMap[26] = { 0 };
//		for (char c : s) {
//			sMap[c - 'a']++;
//		}
//
//		// 再遍历一次这个字符串，判断当前字符在map中的值是否等于1
//		for (int i = 0; i < s.size(); i++) {
//			if (sMap[s[i] - 'a'] == 1) {
//				return i;
//			}
//		}
//		
//
//		return -1;
//	}
//
//};
//
//int main() {
//	return 0;
//}