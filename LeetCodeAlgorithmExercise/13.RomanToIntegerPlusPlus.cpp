//#include<iostream>
//#include<string>
//#include<map>
//using namespace std;
//
//// ��ԭ�ȵ�������תint������������ԭ����Ȼ��������������ΪҪ����map��ԭ��
//// ���������Ȼ����map�����������һ�£�����������һ����ߵ������ұߴ�
//// ����ķ���ֻ��ʹ�ö���if�ˣ��������ۣ��Ͳ����ˣ�
////  ���䣺���ˣ�������map�ˣ��õ����淢��map�����ܵ�����̫���ˣ���������ʵʵ�û���if��switch�����㣡
//class Solution {
//public:
//	int romanToInt(string s) {
//		// ׼��һ��sum��¼����
//		int sum = 0;
//
//		// ֱ��һ��forѭ������Ϊs�ĳ�����1-15֮��
//		for (int i = 0; i < s.size(); i++) {
//			// �жϵ�ǰ�ܽ�ȡ������
//			if (i + 1 == s.size()) {
//				// ���ݵ�ǰ�ַ��õ���Ӧ�����ֲ����뵽sum��
//				sum += getNumFromRoman(s.at(i));
//			}
//			else {
//				// ���Խ�ȡ������
//				// �жϵ�һ�����Ƿ���IXC
//				//		����ǣ���ô�ж����Ǻ�������Ǳ�������С
//				//				���С����ڣ���ôֻ�ѵ�ǰ���ӵ�sum�У�i+1
//				//				�������ôֱ�Ӱ������������ӵ�sum�У�i+2����������������д�������û���κ����⣩
//				//		������ǣ��ǰ�ǰ����ַ���Ӧ�����ַŵ�sum�У�i+1
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
//	// ����һ�������ַ������ض�Ӧ������
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
//	// �������������ַ�����ߵ��ַ���������I��X��C�ڣ����������ǵĹ�ϵ������ӻ������,�����뵽sum��
//	// �����һ������i�Ĺ���
//	void setSumByRomanRelation(int &sum, char &left, char &right,int &i) {
//		int leftV = getNumFromRoman(left);
//		int rightV = getNumFromRoman(right);
//		if (leftV >= rightV) {
//			sum += leftV;
//		}
//		else {
//			sum += rightV - leftV;
//			// ����i��Ҫ��1
//			i++;
//		}
//	}
//
//};
//
//
//// ���ڲ���������תint��
//int main() {
//	cout << "���Կ�ʼ��" << endl;
//
//	Solution s;
//	int result = s.romanToInt("MDCCCLXXXIV");
//
//	cout << "�õ��˽��Ϊ��" << result << endl;
//
//	system("pause");
//
//	return 0;
//}