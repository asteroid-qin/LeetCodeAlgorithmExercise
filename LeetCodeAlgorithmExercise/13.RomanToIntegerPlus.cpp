//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//// ��ԭ�ȵ�������תint����һ���Ľ���ԭ�治֪��Ϊʲô��æ..��
//class Solution {
//public:
//	int romanToInt(string s) {
//		// ׼��һ��sum��¼����
//		int sum = 0;
//
//		// �õ���������ӳ���
//		map<string, int> m = getMapByRomanToInt();
//
//		printMap(m);
//
//		// ������һ��������
//		map<string, int>::iterator it;
//		// ���õ�string�ĳ���
//		int length = s.size();
//		// ��¼��ȡ�ĳ���
//		int subLength = 0;
//		
//		// ֱ��һ��forѭ������Ϊs�ĳ�����1-15֮��
//		for (int i = 0; i < length;) {
//			// Ҫ�ж��ǽ�ȡһ���ַ����ǽ�ȡ�����ַ�
//			if (i + 1 == length) {
//				// ��1����ȣ�˵��i�ǵ�ǰ���һ����ֻ�ܽ�ȡһ��
//				it = m.find(s.substr(i,1));
//				subLength = 1;
//			}
//			else {
//				// ����ȴ�����Խ�ȡ����
//				it = m.find(s.substr(i, 2));
//				subLength = 2;
//			}
//
//			// ����ҵ��ˣ���ȡ��ֵ����sum�У�����subLength�������Ӷ���
//			if (it != m.end()) {
//				sum += it->second;
//				i += subLength;
//			}
//			else {
//				// û���ҵ��Ǿ����ǣ���ȡ������ȥ��û�鵽������Ӧ��ֻ��ȡһλ
//				it = m.find(s.substr(i, 1));
//
//				if (it != m.end()) {
//					// ����鵽�ˣ���ȡ��ֵ����sum�У�iֱ��+1
//					sum += it->second;
//					i += 1;
//				}
//				// ���û�в鵽����Ӧ�����쳣..
//			}
//		}
//
//
//		return sum;
//	}
//
//	// �õ�һ����������������ӳ���
//	map<string, int>& getMapByRomanToInt() const {
//		// ����һ��map
//		static map<string, int> m;
//
//		// ��ÿ�ֿ��ܷ���
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
//	// һ���������ڱ������map
//	void printMap(map<string,int>& m) {
//		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
//			cout << it->first << "->" << it->second << endl;
//		}
//	}
//};
//
//
//// ���ڲ���������תint��
//int main() {
//	cout << "���Կ�ʼ��" << endl;
//
//	Solution s;
//	int result = s.romanToInt("MCMXCIV");
//
//	cout << "�õ��˽��Ϊ��" << result << endl;
//
//	system("pause");
//
//	return 0;
//}