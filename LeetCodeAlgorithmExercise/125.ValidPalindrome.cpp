//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // ����һ���ַ����ж����Ƿ��ǻ���...
//    // �ܼ򵥣������ȱ���һ�Σ�ȥ�������ַ�ֻ����Ӣ����ĸ��ȫת�ɴ�д
//    // Ȼ���ջ��Ķ��ۣ�ǰ��ȽϾ��С��������У����ǲ���һ����򵥷�����
//    // ����ֱ��ʹ������ָ�룬һ�����ҡ�����Ƚ��жϼ���
//    bool isPalindrome(string s) {
//        int n = s.size();
//        int left = 0, right = n - 1;
//        while (left < right) {
//            // isalnum��������е㶫��
//            while (left < right && !isalnum(s[left])) {
//                ++left;
//            }
//            while (left < right && !isalnum(s[right])) {
//                --right;
//            }
//            if (left < right) {
//                if (tolower(s[left]) != tolower(s[right])) {
//                    return false;
//                }
//                ++left;
//                --right;
//            }
//        }
//        return true;
//    }
//
//   
//
//};
//
//// ����
//int main() {
//    Solution s;
//    bool isP = s.isPalindrome("0P");
//
//
//    cout << "�����Σ�" << isP << endl;
//  
//	return 0;
//}