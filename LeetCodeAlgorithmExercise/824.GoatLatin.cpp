//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��S���չ���ת�������ĸ�ʽ��string����ʵ���ǰ���Ҫ������ַ���ƴ�Ӷ��ѣ�
//    // ˼·�����ݿո�ָ����õ�ÿһ�����ʡ�Ȼ����ݵ����Ƿ�����Ԫ����ĸ��ͷ����ƴ������󷵻�����ַ�������
//    // ע�����������һ��������Ҫ�ں����һ��a���ڶ����������������Ե���һ��������¼���ʸ�������������ǰ�������һ��
//    // ���ʣ���ô���ں������һ���ո�
//    string toGoatLatin(string S) {
//        int m = S.size(), count = 0;
//        string res;
//
//        for (int i = 0; i < m; i++) {
//            count++;
//            int size = 0;
//
//            while (i + size < m && S[i + size] != ' ') {
//                size++;
//            }
//
//            string now = S.substr(i, size);
//
//            if (judge(now[0])) {
//                res += now + "ma";
//            }
//            else {
//                res += now.substr(1, -1) + now[0] + "ma";
//            }
//
//            for (int j = 0; j < count; j++) {
//                res += "a";
//            }
//
//            if (i + size != m) {
//                res += " ";
//            }
//
//            i += size;
//        }
//
//        return res;
//    }
//
//    bool judge(char c) {
//        c = tolower(c);
//        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//    }
//};
//
//int main() {
//	return 0;
//}