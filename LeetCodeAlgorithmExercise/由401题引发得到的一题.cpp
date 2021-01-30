//#include<iostream>
//#include<vector>
//using namespace std;
//
///*
//	写出一个算法：如果只知道一个int类型正数中有num个1，求这个int有多少种可能
//	把每种可能放入vector中并返回
//*/
//class Solution {
//public:
//	vector<string> getBinaryPossibility(int num) {
//		vector<string> r;
//		// 首先，排除特殊情况，因为是int类型，并且是正数，所以num不应该大于31
//		if (num > 31) {
//			return r;
//		}
//
//		string s(32, '0');
//		// 开始递归
//		dfs(num, 0, 1, s, r);
//
//		return r;
//	}
//
//	void dfs(int num, int step, int index, string s , vector<string>& r) {
//		if (num == step || index == 32) {
//
//			r.push_back(s);
//			return;
//		}
//		
//		s[index] = '1';
//		
//
//		for (int i = index; i < 32; i++) {
//			dfs(num, step + 1, i + 1, s, r);
//		
//		}
//	}
//};
//
//int main() {
//	Solution s;
//
//	vector<string> v = s.getBinaryPossibility(2);
//
//	for (auto str : v) {
//		cout << str << endl;
//	}
//
//	return 0;
//}