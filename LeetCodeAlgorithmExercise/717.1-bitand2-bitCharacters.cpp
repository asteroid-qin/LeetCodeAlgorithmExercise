//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//    // Ŀ�꣺��������Ϸ�ʽ��0��10��11.�ж����һ���ַ��Ƿ�һ���ǵ�һ��0
//    // ˼·�����һ���ַ��϶���0������Ψһ��ƥ����ַ��ǵڶ���10�����10�м���һ��0����Ϊ1���ƥ��һ��0�����Բ������
//    // ����true������1�ĸ���Ϊż����Ҳ��true����������false������������ż����������^�����Ч��
//    bool isOneBitCharacter(vector<int>& bits) {
//        // ע��ôӵ����ڶ����±꿪ʼ������
//        int i = bits.size() - 2;
//        if (i >= 0 && !bits[i]) {
//            return true;
//        }
//        int count = 1;
//        while (i >= 0 && bits[i]) {
//            i--;
//            count ^= 1;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}