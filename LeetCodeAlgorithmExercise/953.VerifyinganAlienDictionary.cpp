//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�words��ÿһ��string������˳���Ƿ�����order�����˳���ϵ
//    // ˼·���Ȱ�order���������˳�����õ�һ�ű�Ȼ�����words���Ƚϵ�ǰ�ַ�������һ���ַ������Ⱥ��ϵ
//    // ��...���������ˣ�����Ϊ���ж��ַ������ַ���˳���ϵ����ʵ���ж��ַ����������е�˳���Ƿ�������
//    // ������⣡��������⣡��������⣡��������⣡��
//    bool isAlienSorted(vector<string>& words, string order) {
//        int m[26]; // ��¼���ȼ�
//        for (int i = 0; i < 26; i++) {
//            m[order[i] - 'a'] = i;
//        }
//
//        for (int k = 0; k + 1 < words.size(); k++) {
//            string s1 = words[k];
//            string s2 = words[k + 1];
//
//            int i = 0;
//            // ���˵�ǰ����ͬ�Ĳ���
//            while (i < s1.size() && i < s2.size() && s1[i] == s2[i]) {
//                i++;
//            }
//
//            if (i == s1.size()) {
//                break;
//            }
//            else if (i == s2.size()) {
//                return false;
//            }
//            else if (m[s1[i] - 'a'] > m[s2[i] - 'a']){
//                    return false;
//            }
//        }
//
//        return true;
//    }
//
//};
//
//int main() {
//
//    cout << (1 ^ 1)<< endl;
//	return 0;
//}