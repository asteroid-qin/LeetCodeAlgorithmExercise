//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��ת�ַ�����ÿһ������
//    // ˼·��ʹ��˫ָ�룬���ָ��ָ�򵥴ʵ�ͷ��һ��ָ�򵥴ʵ�β��
//    // ����ͨ������whileѭ���ҵ�ͷ�������ǰ�ַ��ǿո��һֱ++��ֱ�����Ϸǿո�
//    // β��Ҫ��+=ͷ��Ȼ������whileѭ�������Ȳ��ܳ���s�ĳ��ȣ���������ǰ�ַ����ַ���++��ֱ�����Ͽո�
//    // ��β
//    // Ȼ��ʼswap���ɡ�������i��j�ĳ��ȡ���˷���ѭ��
//	  // �ðɣ���ʵ����ֻ��Ҫһ��i���㹻��
//    string reverseWords(string s) {
//        int i = 0, j = 0;
//
//        while (i < s.size()) {
//            // ��ͷ
//            while (i < s.size() && (s[i] == ' ')) {
//                i++;
//            }
//            // ��β
//            j = i;
//            while (j < s.size() && (s[j] != ' ')) {
//                j++;
//            }
//
//            // ��ʼ��ת(С��j��β�������)
//            int left = i, right = (j == s.size()?j:j - 1);
//            while (left < right) {
//                swap(s[left++], s[right--]);
//            }
//
//            // ����i��ֵ
//            i = j + 1;
//        }
//
//        return s;
//    }
//};
//
//int main() {
//    Solution s;
//
//    cout << s.reverseWords("Let's take LeetCode contest") << endl;
//    
//    //string str = "Let's take LeetCode contest";
//
//
//    return 0;
//
//
//}