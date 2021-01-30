//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//// 对原先的罗马数转int数最后的升级（原版依然很慢，可能是因为要创建map的原因）
//// 不过这次依然采用map，最后再升级一下（利用罗马数一般左边的数比右边大）
//// 另外的方法只能使用多重if了（极不美观，就不做了）
////  补充：算了，不能用map了，用到后面发现map对性能的提升太少了，还是老老实实用回了if和switch，真香！
//class Solution {
//public:
//	int romanToInt(string s) {
//		// 准备一个sum记录总数
//		int sum = 0;
//
//		// 直接一个for循环，因为s的长度在1-15之间
//		for (int i = 0; i < s.size(); i++) {
//			// 判断当前能截取几个数
//			if (i + 1 == s.size()) {
//				// 根据当前字符得到对应的数字并加入到sum中
//				sum += getNumFromRoman(s.at(i));
//			}
//			else {
//				// 可以截取两个数
//				// 判断第一个数是否是IXC
//				//		如果是，那么判断他们后面的数是比它大还是小
//				//				如果小或等于，那么只把当前数加到sum中，i+1
//				//				如果大，那么直接把两个数相减后加到sum中，i+2（根据罗马数的书写规则绝对没有任何问题）
//				//		如果不是，那把前面的字符对应的数字放到sum中，i+1
//				if (s.at(i) == 'I') {
//					setSumByRomanRelation(sum, s.at(i), s.at(i + 1),i);
//				}
//				else if (s.at(i) == 'X') {
//					setSumByRomanRelation(sum, s.at(i), s.at(i + 1),i);			
//				}else if (s.at(i) == 'C') {
//					setSumByRomanRelation(sum, s.at(i), s.at(i + 1),i);
//				}
//				else {
//					sum += getNumFromRoman(s.at(i));
//				}
//			}
//		}
//
//
//		return sum;
//	}
//
//	// 传入一个罗马字符，返回对应的数字
//	int getNumFromRoman(char & c) {
//		switch (c) {
//		case 'I':
//			return 1;
//		case 'V':
//			return 5;
//		case 'X':
//			return 10;
//		case 'L':
//			return 50;
//		case 'C':
//			return 100;
//		case 'D':
//			return 500;
//		case 'M':
//			return 1000;
//		}
//
//		return -1;
//	}
//	
//	// 传入两个罗马字符（左边的字符必须是在I、X、C内），根据他们的关系进行相加或者相减,最后加入到sum中
//	// 再添加一个控制i的功能
//	void setSumByRomanRelation(int &sum, char &left, char &right,int &i) {
//		int leftV = getNumFromRoman(left);
//		int rightV = getNumFromRoman(right);
//		if (leftV >= rightV) {
//			sum += leftV;
//		}
//		else {
//			sum += rightV - leftV;
//			// 这里i需要加1
//			i++;
//		}
//	}
//
//};
//
//
//// 用于测试罗马数转int数
//int main() {
//	cout << "测试开始：" << endl;
//
//	Solution s;
//	int result = s.romanToInt("MDCCCLXXXIV");
//
//	cout << "拿到了结果为：" << result << endl;
//
//	system("pause");
//
//	return 0;
//}