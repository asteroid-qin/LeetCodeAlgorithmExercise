//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�һ��s�Ƿ����ɾ��һ���ַ��Ϳ��Ա�ɻ��Ĵ�
//    // ˼·���漰�����ľ�Ӧ�ÿ���˫ָ�롣һ����ͷ��ʼ��һ����β��ʼɨ�裬���ָ����ַ���Ⱦ͸���++��--��
//    // �������ȣ���ôҪô�Ƴ���ߣ�Ҫô�Ƴ��ұߣ��ɴ����������ԣ����������
//    // ���ڶ���ֱ��return false��Ĭ��return ture
//    bool validPalindrome(string s) {
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            if (s[i] == s[j]) continue;
//
//            return judge(s, i + 1, j) || judge(s, i, j - 1);
//        }
//        // a b e g e b a c
//        // a c b e g e b c
//        // a e b e g e b f
//        return true;
//    }
//
//    bool judge(string& s, int left, int right) {
//        for (int i = left, j = right; i < j; i++, j--) {
//            if (s[i] != s[j]) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//  
//    // ���ݻ��ĵ����ʽ����Ż���������Ч�����񲢲�����
//    // һ���򵥻��Ĵ����硾a��b��b��a��������һ��e��ɡ�a��b��b��a��e�����ߡ�e��a��b��b��a��
//    // ��iָ��ͷ��jָ��β���ᷢ�֣�
//    // ���i+1ָ���ֵ����jָ���ֵ����ôiָ���ֵ����������
//    // ���j-1ָ���ֵ����iָ���ֵ����ôjָ���ֵ����������
//    // �������ƺ����´󼪣����ǻ���һ������������Ǿ��ǡ�a��c��a��c������a��c��a��b��a��c�������������������ͬʱ
//    // ����������i����j������ÿ�i+2��j-2ָ��������
//    // ���˵��ǣ��������������࿼��һ�Σ�������ͬ���ַ��޷���Ϊ���Ĵ���ͷβ��
//    // �����Ǵ���ʵ�֡���Ȼ�������ֻ��Ҫ����һ��s����������ظ�ɨ�衣�������ڷ�֧�ж�̫�࣬�����ٶȸ���...
//    bool validPalindromeP(string s) { 
//        // ��count��¼���ֵĴ���
//        bool count = false;
//        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//            if (s[i] == s[j]) continue;
//
//            if (count) {
//                return false;
//            }
//
//            if ( (j - i > 3) && (s[i + 1] == s[j]) && (s[j - 1] == s[i]) ) {
//                if (s[i + 2] == s[j - 1]) {
//                    i++;
//                }
//                else if (s[j - 2] == s[i + 1]) {
//                    j--;
//                }
//                else {
//                    return false;
//                }
//            }else if (s[i + 1] == s[j] ) {
//                i++;
//            }
//            else if (s[j - 1] == s[i]) {
//                j--;
//            }
//            else {
//                return false;
//            }
//
//            count = true;
//        }
//        
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}