//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҵ�A��ÿ���ַ����ж����ڵ��ַ���Ȼ�������ظ��ַ�������������������ÿ���ַ������ظ����Σ���
//    // ������������ظ����ַ�
//    // ˼·���������ַ�������ַ�����Сд��ĸ��
//    // ׼������arr���飬һ��������Ŀǰ�ظ��ַ��ĸ�����һ���������㵱ǰ�ַ����ַ��ظ��ĸ�����
//    // ÿ������һ���ַ������ַ����ظ��ĸ�����Ȼ���ٱ���Ŀǰ�ظ��ַ��ĸ�������������ȡ��Сֵ
//    // ������A��������һ�η�Ŀǰ�ظ��ַ����������飬�������ַ��ظ��ĸ�����ѭ���������С�
//    vector<string> commonChars(vector<string>& A) {
//        int m = A.size();
//        int mapC[26] = { 0 };
//
//        for (auto& c : A[0]) {
//            mapC[c - 'a']++;
//        }
//
//        for (int i = 1; i < m; i++) {
//            int now[26] = { 0 };
//
//            for (auto& c : A[i]) {
//                now[c - 'a']++;
//            }
//
//            for (int i = 0; i < 26; i++) {
//                mapC[i] = min(mapC[i], now[i]);
//            }
//        }
//
//        vector<string> res;
//        for (int i = 0; i < 26; i++) {
//            while (mapC[i]--) {
//                res.push_back(string(1, i + 'a'));
//            }
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}