//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//
///*
//*	这个就直接看原题介绍吧
//	写一个程序，输出从 1 到 n 数字的字符串表示。
//		1. 如果 n 是3的倍数，输出“Fizz”；
//		2. 如果 n 是5的倍数，输出“Buzz”；
//		3.如果 n 同时是3和5的倍数，输出 “FizzBuzz”。
//*/
//class Solution {
//public:
//	// 超级简单的一题
//	// 思路：一个for循环，中间加两个if判断即可（一次过..为了更快更小，所以写的比较粗糙，直到字符串拼接和散列拼接就够了！）
//	vector<string> fizzBuzz(int n) {
//		// 放结果
//		vector<string> v(n);
//
//		for (int i = 1; i <= n; i++) {
//			
//			if (i % 3 == 0) {
//				v[i - 1] = "Fizz";
//				if (i % 5 == 0) {
//					v[i - 1] = "FizzBuzz";
//				}
//			}
//			else if (i % 5 == 0) {
//				v[i - 1] = "Buzz";
//			}
//			else {
//				v[i - 1] = to_string(i);
//			}
//
//		}
//
//		return v;
//	}
//};
//
//int main() {
//	return 0;
//}