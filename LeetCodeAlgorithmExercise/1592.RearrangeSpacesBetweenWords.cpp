//#include<iostream>
//#include<stack>
//#include<sstream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��������text�еĿո�Ҫ�����ڵ���֮��Ŀո���Ŀ�� ��� ���������� ��� 
//    // ˼·������һ��text������ո���������ѵ��ʷָ�õ��ַ�������
//    // ����һ���ַ������飬����ƴ�ӡ���ÿһ�����ϣ��ո���/(�ַ������鳤��-1)�����ո���Ҫ�ų����һ���ַ��������
//    // ������ַ�������׷�ӣ��ո���%(�ַ������鳤��-1)�����ո�
//    string reorderSpaces(string text) {
//        int spaceCount = 0, letterCount = 0, m = text.size();
//        for (int i = 0; i < m; i++) {
//            if (text[i] == ' ') {
//                spaceCount++;
//            }
//            if (text[i] != ' ' && ((i == m - 1) || (text[i + 1] == ' '))) {
//                letterCount++;
//            }
//        }
//
//        // û�пո�ֱ�ӷ���
//        if (spaceCount == 0) {
//            return text;
//        }
//        // ���ʸ�������1�Ͳ�����ո�
//        int size = (letterCount == 1) ? 0 : (spaceCount / (letterCount - 1));
//        string res, space(size, ' ');
//
//        for (int i = 0, count = letterCount; i < m; i++) {
//            // �������пհ׸�
//            while (i < m && text[i] == ' ') i++;
//            // ��res��׷���ַ�
//            while (i < m && text[i] != ' ') {
//                res.push_back(text[i]);
//                i++;
//            }
//            count--;
//            if (count > 0) {
//                res.append(space);
//            }
//        }
//
//        // �������пո�
//        res.append(string((letterCount == 1) ? spaceCount : spaceCount % (letterCount - 1), ' '));
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}