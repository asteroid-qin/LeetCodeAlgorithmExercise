//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�typed�Ƿ���name�Ļ����ϣ���Щ�ַ��������ظ����ַ�
//    // ˼·������ΪҪ�����ַ���˳�����Բ�Ӧ��ʹ��map������ʹ��˫ָ�룬һ��ָ��i��һ��ָ��j��
//    // ѭ��i�����㵱ǰ�ظ���������ѭ��j��ע�⣡�ú�iָ��ͬһ���ַ������㵱ǰ�ظ����������j�ظ�����С��i����false
//    // Ĭ��true
//    bool isLongPressedName(string name, string typed) {
//        int i = 0, j = 0, m = name.size(), n = typed.size();
//
//        while( i < m && j < n) {
//            int count = 0;
//            char c = name[i];
//
//            for (; i < m && name[i] == c; ++i, ++count);
//            for (; j < n && typed[j] == c; ++j, --count);
//
//            if (count > 0) {
//                return false;
//            }
//        }
//
//        return (i == m) && (j == n);
//    }
//};
//
//int main() {
//	return 0;
//}