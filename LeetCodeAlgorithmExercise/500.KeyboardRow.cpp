//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�������б�ֻ���ؿ���ʹ���ڼ���ͬһ�е���ĸ��ӡ�����ĵ���
//    // ����������ֻ����26����ĸ
//    // ˼·������һ���ַ����ж����ǵڼ��в���¼�������֮ǰ��¼����������ͬ���Ǿͷ���
//    // ���ؿա�
//    // ˫100%������
//    vector<string> findWords(vector<string>& words) {
//        // ����һ��ӳ���
//        int myLine[26] = { 0 };
//        string line1 = "QWERTYUIOP";
//        string line2 = "ASDFGHJKL";
//        string line3 = "ZXCVBNM";
//        setMap(myLine, line1, line2, line3);
//
//        vector<string> res;
//        // ȥstring�в�
//        for (auto str : words) {
//            int line = -1;
//
//            for (auto c : str) {
//                const char now = toupper(c) - 'A';
//
//                // ע�������ת��д����
//                if (line != -1 && myLine[now] != line) {
//                    goto gothis;
//                }
//                line = myLine[now];
//            }
//
//            res.push_back(str);
//        gothis:;
//        }
//
//        return res;
//    }
//
//    void setMap(int* map, string& line1, string& line2, string& line3) {
//        for (auto c : line1) {
//            map[c - 'A'] = 1;
//        }
//        for (auto c : line2) {
//            map[c - 'A'] = 2;
//        }
//        for (auto c : line3) {
//            map[c - 'A'] = 3;
//        }
//    }
//};
//
//int main() {
//    string s = "asdfg";
//    
//    cout  << s.find('op',-1) << endl;
//
//	return 0;
//}