//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//	// �ݹ���say��������Ȼ�Ǽ򵥣�������ô���ף�
//	// �ݹ������ģ�whileѭ��Ҳ�ܹ�����
//	// �����Ļ�����1��1=1����4��4 = say(3),3 = say(2),2 = say(1)
//	// say�ǣ��õ�һ���ַ�����Ȼ��������ұ�����������ͬ������Ҫ��������ߵ����������ұߵ����ʹ��¿�ʼ����
//	// ��ɣ�δʹ�õݹ�
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
//	// ������д���Ǹ�say������˵��
//	string say(string str) {
//		// ��str�����һ��" ",�����ȡ
//		str += " ";
//
//		// ��ʼ��һ������ƴ�����ַ���
//		string myStr = "";
//
//		// �������str  1123 ����k�����ظ��ĸ���
//		for (int i = 0, k = 1; i + 1 < str.size(); i++,k++) {
//
//			if (str[i] != str[i+1]) {
//				// ����ȵĻ�����Ҫ��ǰ���ͳ��Ϊ�ַ���������ü���
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
//	cout << "���Ϊ��" << result << "--" << endl;
//
//	return 0;
//}
