//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    int romanToInt(string s) {
//		// 准备一个sum记录总数
//		int sum = 0;
//
//		// 拿到罗马数的映射表
//		map<string, int> m;
//		getMapByRoman(m);
//
//		// 如果s是空
//		if (s == "") {
//			cout << "这是一个空字符串！" << endl;
//
//			return -1;
//		}else if(s.size() == 1){
//			cout << "长度大于1" << endl;
//			// 如果长度为1,直接去map中找
//			map<string, int>::iterator it = m.find(s);
//
//			if (it != m.end()) {
//				// 代表找到了,直接return,没有找到就继续向下执行，返回-1
//				return it->second;
//			}
//			else {
//				return -1;
//			}
//		}
//		else {
//			// 如果长度大于等于2,直接一个for循环
//			for (int i = 0;i < s.size();) {
//				// 准备一个字符串接受字符
//				string temp;
//
//				// 要判断j是否已经等于s.size()-1
//				if (i + 1 == s.size()) {
//					// 如果是，那么只能拿到一个值
//					temp.push_back(s.at(i));
//				}
//				else {
//					// 可以拿到两个值
//					temp.push_back(s.at(i));
//					temp.push_back(s.at(i+1));
//				}
//
//				// 直接去map中查
//				map<string,int>::iterator it = m.find(temp);
//
//				// 如果找到了，就取出值放入sum中，根据temp的size决定加多少
//				if (it != m.end()) {
//					sum += it->second;
//					i += temp.size();
//				}
//				else {
//					// 如果没有找到，那么再查前一位
//					// 准备一个string,把原str中的第一位放入
//					string front;
//					front.push_back(temp.front());
//
//					// 继续往map中查
//					it = m.find(front);
//
//					if (it != m.end()) {
//						// 如果查到了（肯定是只有一位），取出对应的value加入到sum中
//						// i向右移一位
//						sum += it->second;
//						i += 1;
//					}
//					else {
//						// 第二次还是没有查到，直接return -1
//						return -1;
//					}
//				}
//			}
//		}
//
//
//		return sum;
//    }
//
//	// 设置map表，封装所有的可能
//	void getMapByRoman(map<string,int>& m) const{
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
//	cout << "测试开始：" <<  endl;
//
//	Solution s;
//	int result = s.romanToInt("MCMXCIV");
//
//	cout << "拿到了结果为：" << result << endl;
//
//	// 下面是对字符和字符串之间的转换做一个实验
//	// 准备一个map
//	/*map<string, int> m;
//	m["IV"] = 5;
//
//	string s = "IV";
//	char x[2] = { 'I','V' };*/
//	// char 转string
//	/*string myTemp;
//	myTemp.push_back(x[0]);
//
//	map<string,int>::iterator i = m.find(myTemp);
//
//	if (i != m.end()) {
//		cout << "拿到了结果为：" << i->second << endl;
//	}
//	else {
//		cout << "不好意思，没有找到" << myTemp << "->" <<endl;
//	}*/
//
//	system("pause");
//
//	return 0;
//}