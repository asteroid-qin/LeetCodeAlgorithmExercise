//#include<iostream>
//#include<vector>
//using namespace std;
//
///*
//	д��һ���㷨�����ֻ֪��һ��int������������num��1�������int�ж����ֿ���
//	��ÿ�ֿ��ܷ���vector�в�����
//*/
//class Solution {
//public:
//	vector<string> getBinaryPossibility(int num) {
//		vector<string> r;
//		// ���ȣ��ų������������Ϊ��int���ͣ�����������������num��Ӧ�ô���31
//		if (num > 31) {
//			return r;
//		}
//
//		string s(32, '0');
//		// ��ʼ�ݹ�
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