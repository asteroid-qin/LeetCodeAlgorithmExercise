//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//// 对原先的罗马数转int数做一个改进（原版不知道为什么很忙..）
//class Solution {
//public:
//	int romanToInt(string s) {
//		// 准备一个sum记录总数
//		int sum = 0;
//
//		// 拿到罗马数的映射表
//		map<string, int> m = getMapByRomanToInt();
//
//		printMap(m);
//
//		// 先声明一个迭代器
//		map<string, int>::iterator it;
//		// 再拿到string的长度
//		int length = s.size();
//		// 记录截取的长度
//		int subLength = 0;
//		
//		// 直接一个for循环，因为s的长度在1-15之间
//		for (int i = 0; i < length;) {
//			// 要判断是截取一个字符还是截取两个字符
//			if (i + 1 == length) {
//				// 加1就相等，说明i是当前最后一个，只能截取一个
//				it = m.find(s.substr(i,1));
//				subLength = 1;
//			}
//			else {
//				// 不相等代表可以截取两个
//				it = m.find(s.substr(i, 2));
//				subLength = 2;
//			}
//
//			// 如果找到了，就取出值放入sum中，根据subLength来决定加多少
//			if (it != m.end()) {
//				sum += it->second;
//				i += subLength;
//			}
//			else {
//				// 没有找到那绝对是：截取了两个去查没查到，所以应该只截取一位
//				it = m.find(s.substr(i, 1));
//
//				if (it != m.end()) {
//					// 如果查到了，就取出值放入sum中，i直接+1
//					sum += it->second;
//					i += 1;
//				}
//				// 如果没有查到，那应该抛异常..
//			}
//		}
//
//
//		return sum;
//	}
//
//	// 得到一个罗马数和整数的映射表
//	map<string, int>& getMapByRomanToInt() const {
//		// 创造一个map
//		static map<string, int> m;
//
//		// 把每种可能放入
//		m["I"] = 1;
//		m["V"] = 5;
//		m["X"] = 10;
//		m["L"] = 50;
//		m["C"] = 100;
//		m["D"] = 500;
//		m["M"] = 1000;
//
//		m["IV"] = 4;
//		m["IX"] = 9;
//		m["XL"] = 40;
//		m["XC"] = 90;
//		m["CD"] = 400;
//		m["CM"] = 900;
//
//		return m;
//	}
//
//	// 一个方法用于遍历这个map
//	void printMap(map<string,int>& m) {
//		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
//			cout << it->first << "->" << it->second << endl;
//		}
//	}
//};
//
//
//// 用于测试罗马数转int数
//int main() {
//	cout << "测试开始：" << endl;
//
//	Solution s;
//	int result = s.romanToInt("MCMXCIV");
//
//	cout << "拿到了结果为：" << result << endl;
//
//	system("pause");
//
//	return 0;
//}