//#include<iostream>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//	// Ŀ�꣺�ҳ���һ�����ظ����ַ�
//	// Լ���������ַ�����ֻ��Сд��ĸ
//	// ˼·��ʹ��hash��¼ÿ����ĸ���ֵĸ������ٴ�ǰ�����������ַ������ҵ���һ��valueΪ1���ַ������ص�ǰ������
//	int firstUniqChar(string s) {
//		// ��Ϊֻ����26��xСд��ĸ�������������ʹ���������hashmap
//		int sMap[26] = { 0 };
//		for (char c : s) {
//			sMap[c - 'a']++;
//		}
//
//		// �ٱ���һ������ַ������жϵ�ǰ�ַ���map�е�ֵ�Ƿ����1
//		for (int i = 0; i < s.size(); i++) {
//			if (sMap[s[i] - 'a'] == 1) {
//				return i;
//			}
//		}
//		
//
//		return -1;
//	}
//
//};
//
//int main() {
//	return 0;
//}