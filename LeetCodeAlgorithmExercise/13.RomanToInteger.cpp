//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    int romanToInt(string s) {
//		// ׼��һ��sum��¼����
//		int sum = 0;
//
//		// �õ���������ӳ���
//		map<string, int> m;
//		getMapByRoman(m);
//
//		// ���s�ǿ�
//		if (s == "") {
//			cout << "����һ�����ַ�����" << endl;
//
//			return -1;
//		}else if(s.size() == 1){
//			cout << "���ȴ���1" << endl;
//			// �������Ϊ1,ֱ��ȥmap����
//			map<string, int>::iterator it = m.find(s);
//
//			if (it != m.end()) {
//				// �����ҵ���,ֱ��return,û���ҵ��ͼ�������ִ�У�����-1
//				return it->second;
//			}
//			else {
//				return -1;
//			}
//		}
//		else {
//			// ������ȴ��ڵ���2,ֱ��һ��forѭ��
//			for (int i = 0;i < s.size();) {
//				// ׼��һ���ַ��������ַ�
//				string temp;
//
//				// Ҫ�ж�j�Ƿ��Ѿ�����s.size()-1
//				if (i + 1 == s.size()) {
//					// ����ǣ���ôֻ���õ�һ��ֵ
//					temp.push_back(s.at(i));
//				}
//				else {
//					// �����õ�����ֵ
//					temp.push_back(s.at(i));
//					temp.push_back(s.at(i+1));
//				}
//
//				// ֱ��ȥmap�в�
//				map<string,int>::iterator it = m.find(temp);
//
//				// ����ҵ��ˣ���ȡ��ֵ����sum�У�����temp��size�����Ӷ���
//				if (it != m.end()) {
//					sum += it->second;
//					i += temp.size();
//				}
//				else {
//					// ���û���ҵ�����ô�ٲ�ǰһλ
//					// ׼��һ��string,��ԭstr�еĵ�һλ����
//					string front;
//					front.push_back(temp.front());
//
//					// ������map�в�
//					it = m.find(front);
//
//					if (it != m.end()) {
//						// ����鵽�ˣ��϶���ֻ��һλ����ȡ����Ӧ��value���뵽sum��
//						// i������һλ
//						sum += it->second;
//						i += 1;
//					}
//					else {
//						// �ڶ��λ���û�в鵽��ֱ��return -1
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
//	// ����map����װ���еĿ���
//	void getMapByRoman(map<string,int>& m) const{
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
//	cout << "���Կ�ʼ��" <<  endl;
//
//	Solution s;
//	int result = s.romanToInt("MCMXCIV");
//
//	cout << "�õ��˽��Ϊ��" << result << endl;
//
//	// �����Ƕ��ַ����ַ���֮���ת����һ��ʵ��
//	// ׼��һ��map
//	/*map<string, int> m;
//	m["IV"] = 5;
//
//	string s = "IV";
//	char x[2] = { 'I','V' };*/
//	// char תstring
//	/*string myTemp;
//	myTemp.push_back(x[0]);
//
//	map<string,int>::iterator i = m.find(myTemp);
//
//	if (i != m.end()) {
//		cout << "�õ��˽��Ϊ��" << i->second << endl;
//	}
//	else {
//		cout << "������˼��û���ҵ�" << myTemp << "->" <<endl;
//	}*/
//
//	system("pause");
//
//	return 0;
//}