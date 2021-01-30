//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	// 递归求say，这道题居然是简单？？就特么离谱！
//	// 递归能做的，while循环也能够做到
//	// 这道题的基础是1，1=1，求4？4 = say(3),3 = say(2),2 = say(1)
//	// say是，得到一个字符串，然后从左往右遍历，遇到相同的数需要计数，左边的数不等于右边的数就从新开始计数
//	// 完成！未使用递归
//	string countAndSay(int n) {
//		string result = "1";
//
//		for (int i = 1; i < n; i++) {
//			result = say(result);
//		}
//
//		return result;
//    }
//
//	// 所以先写出那个say函数再说吧
//	string say(string str) {
//		// 往str后面加一个" ",方便获取
//		str += " ";
//
//		// 初始化一个用于拼串的字符串
//		string myStr = "";
//
//		// 遍历这个str  1123 变量k接受重复的个数
//		for (int i = 0, k = 1; i + 1 < str.size(); i++,k++) {
//
//			if (str[i] != str[i+1]) {
//				// 不相等的话就需要把前面的统计为字符，最后重置计数
//				myStr.append(to_string(k));
//				myStr.push_back(str[i]);
//				k = 0;
//			}
//		}
//
//		return myStr;
//	}
//};
//
//int main() {
//	Solution s;
//	string result = s.countAndSay(4);
//	
//	cout << "结果为：" << result << "--" << endl;
//
//	return 0;
//}
